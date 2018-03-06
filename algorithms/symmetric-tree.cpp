class Solution {
public:
    bool mirrorMatch( TreeNode *a, TreeNode *b ) {
        if (!a && !b) return true;
        if (!a || !b) return false;
        if (a->val != b->val) return false;
        return( mirrorMatch(a->left,b->right) && mirrorMatch(a->right,b->left) );
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return mirrorMatch( root->left, root->right );
    }
};