class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m; 
        for (int i = 0; i < nums.size(); i++)
            if (++m[nums[i]] > nums.size() / 2)
                return nums[i];
    }
};