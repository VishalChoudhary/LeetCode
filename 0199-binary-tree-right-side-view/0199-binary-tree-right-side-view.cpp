class Solution {
public:
    void rightView(TreeNode *node, int level, vector<int> &ans){
        if(node==NULL)
        return;
        if(level==ans.size())
        ans.push_back(node->val);
        rightView(node->right,level+1,ans);
        rightView(node->left,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        rightView(root,0,ans);
        return ans;
    }
};