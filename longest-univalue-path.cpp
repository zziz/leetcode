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
    int length(TreeNode *node, int *path) {
        if (!node)  return 0;
        
        int left = length(node->left, path);
        int right = length(node->right, path);
        int lmax = 0, rmax = 0;
        
        if (node->left && node->left->val == node->val) 
            lmax += left + 1;  
        
        if (node->right && node->right->val == node->val) 
            rmax += right + 1;
        
        *path = max(*path, lmax + rmax);
        return max(lmax, rmax);
}
    int longestUnivaluePath(TreeNode* root) {
        int path = 0;
        length(root, &path);
        return path;
    }
};