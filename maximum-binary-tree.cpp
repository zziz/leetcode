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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }
    
    //max_index denotes the index of the maximum number in range [left, right]
    TreeNode* helper(vector<int>& nums, int left, int right){
        if(left>right)return NULL;
        
        int max_index = left;
        for(int i = left; i<=right; i++){
            if(nums[i] > nums[max_index])max_index = i; 
        }
        
        TreeNode* root = new TreeNode(nums[max_index]);
        root->left = helper(nums, left, max_index - 1);
        root->right = helper(nums, max_index + 1, right);
        return root;
    }
};


