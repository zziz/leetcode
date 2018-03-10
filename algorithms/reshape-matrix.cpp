class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>> result;
        vector<int> col;
        int cols = nums.size();
        int rows = nums[0].size();
        if(rows * cols != r * c)    return nums;
        int entry = 1;
        for(auto& i : nums){
            for(auto& j : i){
                col.push_back(j);
                if(entry % c == 0){
                    result.push_back(col);
                    entry = 1;
                    col.clear();
                    continue;
                }
                entry++;
            }
        }
        return result;
    }
};