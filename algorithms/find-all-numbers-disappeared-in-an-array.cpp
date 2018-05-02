class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> m;
        for(auto& i : nums) m[i]++;
        vector<int> result;
        for(int i = 1; i <= nums.size(); i++)
            if(m[i] == 0)   result.push_back(i);
        return result;
    }
};