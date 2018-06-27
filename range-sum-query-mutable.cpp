class NumArray {
public:
    int len=0;
    vector<int> dup;
    vector<int> seg;
    // qsum -> calculates sum between the given range
    int qsum(vector<int> &seg,int &qlow,int &qhigh,int low,int high,int pos){
        if(qlow <= low && qhigh >= high) return seg[pos];
        if(low>qhigh ||high<qlow) return 0;
        int mid = low + (high-low)/2;
        return qsum(seg,qlow,qhigh,low,mid,2*pos+1) + qsum(seg,qlow,qhigh,mid+1,high,2*pos+2);
    }
    // segpopulate -> populates the segment tree
    void segpopulate(vector<int> &nums,vector<int> &seg,int low,int high,int pos){
        if(high == low) {seg[pos] = nums[low]; return;} 
        int mid  = low + (high-low)/2;
        segpopulate(nums,seg,low,mid,2*pos+1);
        segpopulate(nums,seg,mid+1,high,2*pos+2);
        seg[pos] = seg[2*pos+1] + seg[2*pos+2];
    }
    //  modify -> makes changes to segment tree
    void modify(vector<int> &seg,int low,int high, int &index, int &target,int pos){
        if(low <= index && high >= index) seg[pos] = seg[pos]+target;
        if(low == high) return;
        if(low>index ||high<index) return ;
        int mid = low + (high-low)/2;
        modify(seg,low,mid,index,target,2*pos+1);
        modify(seg,mid+1,high,index,target,2*pos+2);
    }
    NumArray(vector<int> nums) {
        dup = nums;
        len = nums.size();
        if(len ==0) return;
        int s = log2(len);
        if(pow(2,s)!= len) s++;
        s = pow(2,s);
        s = 2*s -1;
        seg = vector<int>(s,0);
        segpopulate(nums,seg,0,nums.size()-1,0);
    }
    
    void update(int i, int val) {
        int diff = val - dup[i];
        dup[i] = val;
        modify(seg,0,len-1,i,diff,0);
    }
    
    int sumRange(int i, int j) {
        return qsum(seg,i,j,0,len-1,0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * obj.update(i,val);
 * int param_2 = obj.sumRange(i,j);
 */