class Solution {
    public:
    int pathSum(TreeNode* root, int sum) {
        return root ? f(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum) : 0;
    }
    
    int f(TreeNode* root, int sum) {
        return root ? (root->val == sum) + f(root->left, sum - root->val) + f(root->right, sum - root->val) : 0;
    }
};