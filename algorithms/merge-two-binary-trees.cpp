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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if ( t1 && t2 ) {
            TreeNode * root = new TreeNode(t1->val + t2->val);
            root->left = mergeTrees(t1->left, t2->left);
            root->right = mergeTrees(t1->right, t2->right);
            return root;
        } 
        else if (t1) {
            TreeNode* m = new TreeNode(t1->val);
            m->left = t1->left;
            m->right = t1->right;
            return m;
        }
        else if (t2) {
            TreeNode* m = new TreeNode(t2->val);
            m->left = t2->left;
            m->right = t2->right;
            return m;
        }
        else
            return NULL;
    }
};