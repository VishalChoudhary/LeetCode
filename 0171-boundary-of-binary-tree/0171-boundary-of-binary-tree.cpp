void addLeftBoundary(TreeNode *root,vector<int> &res){
    TreeNode *curr=root->left;
    while(curr){
        if(!isLeaf(curr)) res.push_back(curr->data);
        if(curr->left) curr=curr->left;
        else curr=curr->right;
    }
}

void addRightBoundary(TreeNode *root,vector<int> &res){
    TreeNode *curr=root->right;
    vector<int> temp;
    while(curr){
        if(isLeaf(curr)) temp.push_back(curr->data);
        if(curr->right) curr=curr->right;
        else curr=curr->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        res.push_back(temp[i]);
    }
}

void addLeaves(TreeNode *root,vector<int> &res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left) addLeaves(root->left, res);
    if(root->right) addLeaves(root->right, res);
}
