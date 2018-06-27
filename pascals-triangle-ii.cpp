class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result;
                
        result.push_back(vector<int>{1});
        result.push_back(vector<int>{1, 1});
        for(int i = 2; i < rowIndex + 1; i++){
            vector<int> row;
            row.push_back(1);
            
            for(int j = 0; j < result[i - 1].size() - 1; j++){
                row.push_back(result[i - 1][j] + result[i - 1][j + 1]);
            }
            row.push_back(1);
            result.push_back(row);
        }
        return result[rowIndex];
    }
};
