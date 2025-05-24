class Solution {
public:
    TreeNode* buildTree(vector<int>& inOrder,int inStart,int inEnd,vector<int>& preOrder, 
    int preStart,int preEnd, map<int,int>&mpp){
        if(preStart>preEnd || inStart>inEnd) return NULL;
        TreeNode *root = new TreeNode(preOrder[preStart]);
        int inRoot = mpp[root->val];
        int num = inRoot-inStart;
        root->left=buildTree(inOrder,inStart,inRoot-1,preOrder,preStart+1,preStart+num,mpp);
        root->right=buildTree(inOrder,inRoot+1,inEnd,preOrder,preStart+num+1,preEnd,mpp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preOrder, vector<int>& inOrder) {
        map<int,int> mpp;
        for(int i=0;i<inOrder.size();i++){
            mpp[inOrder[i]]=i;
        }
        TreeNode *root=buildTree(inOrder,0,inOrder.size()-1,preOrder,0,preOrder.size()-1,mpp);
        return root;
    }
};