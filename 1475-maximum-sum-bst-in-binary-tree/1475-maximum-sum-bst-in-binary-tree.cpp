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
class NodeValue{
public:
    int maxSize,maxNode,minNode,sum;
    NodeValue(int maxSize,int maxNode,int minNode,int sum){
        this->maxSize=maxSize;
        this->maxNode=maxNode;
        this->minNode=minNode;
        this->sum=sum;
    }
};
class Solution {
public:
    int maxSum=0;
    NodeValue largestBSTSubtree(TreeNode *root){
        if(root==NULL)
        return NodeValue(0,INT_MIN,INT_MAX,0);
        auto left=largestBSTSubtree(root->left);
        auto right=largestBSTSubtree(root->right);
        if(left.maxNode<root->val && root->val<right.minNode){
            int currSum=root->val+left.sum+right.sum;
            maxSum=max(maxSum,currSum);
            return NodeValue(1+left.maxSize+right.maxSize,max(root->val,right.maxNode),min(root->val,left.minNode),currSum);
        }
        return NodeValue(max(left.maxSize,right.maxSize),INT_MAX,INT_MIN,0);
    }
    int maxSumBST(TreeNode* root) {
        largestBSTSubtree(root);
        return maxSum;
    }
};