class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if(n == 0)  return false;
        int m = matrix[0].size();
        if(m == 0)  return false;
        for(int i = 0; i < n; i++){
            if(target >= matrix[i][0] && target <= matrix[i][matrix[0].size() - 1]){
                // do binary search
                for(int j = 0; j < m; j++){
                    if(target == matrix[i][j])  return true;
                }
            }
        }
        return false;
    }
};