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
    int sum = 0;
public:
    void convert(TreeNode* cur) {
        if (!cur) return;
        convert(cur->right);
        cur->val += sum;
        sum = cur->val;
        convert(cur->left);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        
        //getSum(sum, root);
        //cout << sum << endl;
        convert(root);
        return root;
    }
};