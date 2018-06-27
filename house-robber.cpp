class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty())    return 0;
        else if(nums.size() == 1)   return nums[0];
        else if(nums.size() == 2)   return max(nums[0], nums[1]);
        else{
            vector<int> f;
            f.push_back(nums[0]);
            f.push_back(max(nums[0], nums[1]));
            for(int i = 2; i < nums.size(); i++)
                f.push_back(max(nums[i] + f[i - 2], f[i - 1]));
            return max(f[f.size() - 1], f[f.size() - 2]);
        }
    }
};