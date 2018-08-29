class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int total = 0;
        
        int width = grid.size();
        int height = grid[0].size();
                
        for(int i = 0; i < width; i++){
            for(int j = 0; j < height; j++){
                // cout << grid[i][j] << endl;
                // if(i == 0)
                //up
                int dd = 0;
                if(i > 0)           dd -= min(grid[i][j], grid[i - 1][j]);   // up
                if(j > 0)           dd -= min(grid[i][j], grid[i][j - 1]);   // left
                if(i < width - 1)   dd -= min(grid[i][j], grid[i + 1][j]);    //right
                if(j < height - 1)  dd -= min(grid[i][j], grid[i][j + 1]);
                
                if(grid[i][j] > 0)  total += 2 + 4 * grid[i][j] + dd;                
            }
        }
        return total;
    }
};