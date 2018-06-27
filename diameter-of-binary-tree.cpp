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
    int depth(TreeNode* root){
        if(!root)   return 0;
        else        return max(depth(root->left), depth(root->right)) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)   return 0;
        int longestPath = depth(root->left) + depth(root->right);
        return max(longestPath, max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
    }
};