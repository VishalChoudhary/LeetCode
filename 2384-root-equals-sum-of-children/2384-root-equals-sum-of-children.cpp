class Solution {
public:
    bool checkTree(TreeNode* root) {
        if(root==NULL)
        return 0;
        int child=0;
        if(root->left) child+=root->left->val;
        if(root->right) child+=root->right->val;
        if(child==root->val)
        return true;
        checkTree(root->left);
        checkTree(root->right);
        return false;
    }
};