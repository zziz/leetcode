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
    
    vector<vector<int>> ret;
    vector<double> result;
    
    void buildVector(TreeNode *root, int depth){
        if(root == NULL) return;
        if(ret.size() == depth)
            ret.push_back(vector<int>());
    
        ret[depth].push_back(root->val);
        buildVector(root->left, depth + 1);
        buildVector(root->right, depth + 1);
    }

    vector<double> averageOfLevels(TreeNode *root) {
        buildVector(root, 0);
        for(auto& it : ret){
            double average = 0;
            for(auto& j : it){
                average += j;
            }
            result.push_back(average / (double) it.size());
        }
        return result;
    }
};
