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
    void bfs(TreeNode* root, int depth){
        if(!root)   return;
        if(bfsv.size() == depth)    bfsv.push_back(vector<int>());
        bfsv[depth].push_back(root->val);
        bfs(root->left, depth + 1);
        bfs(root->right, depth + 1);
    }
    
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        bfs(root, 0);
        for(auto& it : bfsv)    result.push_back(*max_element(it.begin(), it.end()));
        return result;
    }
};