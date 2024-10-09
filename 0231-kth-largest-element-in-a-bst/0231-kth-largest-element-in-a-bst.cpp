class Solution
{

    int kthLargest(Node *root, int K)
    {
        //Your code here
        int kLargest=INT_MIN;
        int counter=0;
        reverseInOrder(root,counter,K,kLargest);
        return kLargest;
    }
};