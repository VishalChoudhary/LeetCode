class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int p)
    {
        // Your code goes here
        Node *curr=root;
        while(curr!=NULL){
            if(p>=curr->val)
                curr=curr->right;
            else{
                suc=curr;
                curr=curr->left;
            }
        }
        curr=root;
        while(curr!=NULL){
            if(p<=curr->val)
                curr=curr->left;
            else{
                pre=curr;
                curr=curr->right;
            }
        }
        return;
    }
};
