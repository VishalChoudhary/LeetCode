int floorInBST(TreeNode<int> * root, int key)
{
    // Write your code here.
    int floor=-1;
    while(root){
        if(root->val==key){
            floor=root->val;
            return floor;
        }
        if(root->val>key){
            root=root->left;
        }
        else{
            floor=root->val;
            root=root->right;
        }
    }
    return floor;
}
