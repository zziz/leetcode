class Solution {
public:
    int jump(vector<int>& nums) {
        int sc = 0;
        int e = 0;
        int _max = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            _max = max(_max, i + nums[i]);
            
            if(i == e) {
                sc++;
                e = _max;
            } 
        }
        return sc;
    }
};
