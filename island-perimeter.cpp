class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int result = 0;
        // left & right zero padding
        for(auto& it : grid){
            it.insert(it.begin(), 0);
            it.push_back(0);
        }
        
        // up & down zero padding
        vector<int> fb;
        for(int i = 0; i < grid[0].size(); i++)  fb.push_back(0);
        grid.insert(grid.begin(), fb);
        grid.push_back(fb);    
        m = grid.size(), n = grid[0].size();
        
        // calculate gradient
        for (int i = 1; i < m; i++){
            for (int j = 1; j < n; j++){
                    if(grid[i][j] != grid[i][j - 1])  result++;
                    if(grid[i][j] != grid[i - 1][j])  result++;
            }
        }
        return result;
    }
};

