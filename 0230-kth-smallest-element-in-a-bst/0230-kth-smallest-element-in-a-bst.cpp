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
    void inOrder(TreeNode *root,int &counter,int k,int &kSmallest){
        if(root==NULL || counter>=k)
        return;
        inOrder(root->left,counter,k,kSmallest);
        counter++;
        if(counter==k){
            kSmallest=root->val;
            return;
        }
        inOrder(root->right,counter,k,kSmallest);
    }
    int kthSmallest(TreeNode* root, int k) {
        int kSmallest=INT_MAX;
        int counter=0;
        inOrder(root,counter,k,kSmallest);
        return kSmallest;
    }
};