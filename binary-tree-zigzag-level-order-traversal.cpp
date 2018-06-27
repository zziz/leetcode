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
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bfs(root, 0);
        int i = 1;
        for(auto& it : bfsv){
            if(i % 2 == 0)  reverse(it.begin(), it.end());
            i++;
        }
        return bfsv;
    }
};