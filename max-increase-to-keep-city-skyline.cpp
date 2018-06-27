class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        int diff = 0;
        
        int n = grid.size();
        
        vector<int> row_max (n, -1);
        vector<int> col_max (n, -1);
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] > row_max[i]) row_max[i] = grid[i][j];
                if(grid[i][j] > col_max[j]) col_max[j] = grid[i][j];
                
            }
        }
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                diff += min(row_max[i], col_max[j]) - grid[i][j];
            }
        }        
                
        return diff;
        
    }
};