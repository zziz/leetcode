class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(auto& it : nums)
            result ^= it;
        return result;
    }
};