class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> m; 
        vector<int> result;
        for (int i = 0; i < nums.size(); i++){
            if (++m[nums[i]] > (int) nums.size() / 3){
                m[nums[i]] = -nums.size();
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};