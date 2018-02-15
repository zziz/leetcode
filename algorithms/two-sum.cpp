class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> res;
        for (int a = 0; a < nums.size(); a++) {
            int b = target - nums[a];
            if (m.find(b) != m.end()) {
                res.push_back(m[b]);
                res.push_back(a);			
                return res;
            }
            m[nums[a]] = a;
        }
        return res;
    }
};