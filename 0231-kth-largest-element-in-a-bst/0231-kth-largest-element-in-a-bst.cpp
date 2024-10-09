class Solution
{
    public:
    void reverseInOrder(Node *root,int &counter,int k,int &kLargest){
        if(root==NULL || counter>=k)
        return;
        reverseInOrder(root->right,counter,k,kLargest);
        counter++;
        if(counter==k){
            kLargest=root->data;
            return;
        }
        reverseInOrder(root->left,counter,k,kLargest);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int kLargest=INT_MIN;
        int counter=0;
        reverseInOrder(root,counter,K,kLargest);
        return kLargest;
    }
};
