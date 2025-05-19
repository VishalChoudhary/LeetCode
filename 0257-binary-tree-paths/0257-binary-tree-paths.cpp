class Solution {
public:
    void dfs(TreeNode *node, string path, vector<string> &ans){
        if(node==NULL)
        return;
        path+=to_string(node->val);
        if(!node->left && !node->right)
        ans.push_back(path);
        else{
            path+="->";
            dfs(node->left,path,ans);
            dfs(node->right,path,ans);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        dfs(root,"",ans);
        return ans;
    }
};