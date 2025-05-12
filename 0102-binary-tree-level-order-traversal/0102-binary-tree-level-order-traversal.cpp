class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        if(root==NULL)
        return ans;
        q.push(root);
        while(!q.empty()){
            vector<int> ds;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode *node = q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                ds.push_back(node->val);
            }
            ans.push_back(ds);
        }
        return ans;
    }
};