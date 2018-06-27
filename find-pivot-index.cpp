class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < nums.size(); i++){
            if((double) (totalSum - nums[i]) / 2.0 == (double) accumulate(nums.begin(), nums.begin() + i, 0))   return i;
        }
        return -1;
    }
};