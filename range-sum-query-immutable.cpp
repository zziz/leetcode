class NumArray {
    vector<int> mNums;
public:
    NumArray(vector<int> nums) {
        mNums = nums;
    }
    
    int sumRange(int i, int j) {
        int result = 0;
        for(int s = i; s <= j; s++)
            result += mNums[s];
        return result;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */