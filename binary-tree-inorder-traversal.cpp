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
    vector<int> result;
    
public:
    vector<int> inorderTraversal(TreeNode* root) { 
        if(!root)   return result;
        inorderTraversal(root->left);
        //if(root){
            result.push_back(root->val);
        //}
        inorderTraversal(root->right);
        return result;
    }
};