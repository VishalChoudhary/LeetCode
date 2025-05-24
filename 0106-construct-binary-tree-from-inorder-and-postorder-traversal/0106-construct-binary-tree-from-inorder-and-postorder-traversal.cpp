class Solution {
public:
    TreeNode* buildTree(vector<int>& inOrder, int inStart, int inEnd, vector<int>& postOrder,
    int postStart,int postEnd, map<int,int> &mpp){
        if(postStart>postEnd || inStart>inEnd)
        return NULL;
        TreeNode *root=new TreeNode(postOrder[postEnd]);
        int inRoot = mpp[root->val];
        int num = inRoot-inStart;
        root->left=buildTree(inOrder,inStart,inRoot-1,postOrder,postStart,postStart+num-1,mpp);
        root->right=buildTree(inOrder,inRoot+1,inEnd,postOrder,postStart+num,postEnd-1,mpp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size())
        return NULL;
        map<int,int> mpp;
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]]=i;
        }
        return buildTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mpp);
    }
};