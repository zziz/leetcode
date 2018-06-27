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
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)   return sum;
        if(root->left && !root->left->left && !root->left->right)  sum += root->left->val;
        if(root-> left) sumOfLeftLeaves(root->left);
        if(root->right) sumOfLeftLeaves(root->right);
        return sum;
    }
};