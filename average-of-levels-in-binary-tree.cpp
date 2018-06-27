/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    vector<vector<int>> bfsv;
    vector<double> result;
    
    void bfs(TreeNode *root, int depth){
        if(root == NULL) return;
        if(bfsv.size() == depth)
            bfsv.push_back(vector<int>());
    
        bfsv[depth].push_back(root->val);
        bfs(root->left, depth + 1);
        bfs(root->right, depth + 1);
    }

    vector<double> averageOfLevels(TreeNode *root) {
        bfs(root, 0);
        for(auto& it : bfsv){
            double average = 0;
            for(auto& j : it){
                average += j;
            }
            result.push_back(average / (double) it.size());
        }
        return result;
    }
};
