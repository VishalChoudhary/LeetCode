class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        return 0;
        int ans=0;
        queue<pair<TreeNode*,long long int>> q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            long long int minm = q.front().second;
            long long int first,last;
            for(int i=0;i<size;i++){
                long long int currId = q.front().second-minm;
                TreeNode * node = q.front().first;
                q.pop();
                if(i==0) first = currId;
                if(i==size-1) last = currId;
                if(node->left) q.push({node->left,currId*2+1});
                if(node->right) q.push({node->right,currId*2+2});
            }
            ans=max(ans,static_cast<int>(last-first+1));
        }
        return ans;
    }
};