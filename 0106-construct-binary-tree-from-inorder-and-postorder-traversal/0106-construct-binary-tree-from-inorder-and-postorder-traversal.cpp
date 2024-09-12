/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int> &inOrder,int inStart,int inEnd,vector<int> &postOrder,int postStart,int postEnd,           
    map<int,int> &inMap){
        if(postStart>postEnd || inStart>inEnd)
        return NULL;
        TreeNode *root=new TreeNode(postOrder[postEnd]);
        int inRoot=inMap[postOrder[postEnd]];
        int numLeft=inRoot-inStart;
        root->left=buildTree(inOrder,inStart,inRoot-1,postOrder,postStart,postStart+numLeft-1,inMap);
        root->right=buildTree(inOrder,inRoot+1,inEnd,postOrder,postStart+numLeft,postEnd-1,inMap);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size())
        return NULL;
        map<int,int>inMap;
        for(int i=0;i<inorder.size();i++){
            inMap[inorder[i]]=i;
        }
        TreeNode *root=buildTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,inMap);
        return root;
    }
};