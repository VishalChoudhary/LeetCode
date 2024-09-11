void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
    if(root==NULL)
    return;
    int child=0;
    if(root->left)
        child+=root->left->data;
    }  