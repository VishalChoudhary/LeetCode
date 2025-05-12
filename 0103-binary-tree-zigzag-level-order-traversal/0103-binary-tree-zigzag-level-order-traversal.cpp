class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        return ans;
        queue<TreeNode *> q;
        q.push(root);
        bool ltr=true;
        while(!q.empty()){
            int size=q.size();
            vector<int>ds(size);
            for(int i=0;i<size;i++){
                TreeNode *node=q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                int index=ltr?i:size-1-i;
                ds[index]=node->val;
            }
            ltr=!ltr;
            ans.push_back(ds);
        }
        return ans;
    }
};