class Solution {
  public:
    vector<int> getTopView(TreeNode<int> *root){
    vector<int> ans;
    if(root==NULL)
    return ans;
    map<int,int> mpp;
    queue<pair<TreeNode<int>*, int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        TreeNode<int> *node = it.first;
        int line = it.second;
        if(mpp.find(line)==mpp.end()){
            mpp[line] = node->data;
        }
        if(node->left) q.push({node->left,line-1});
        if(node->right) q.push({node->right,line+1});
    }
    for(auto x:mpp){
        ans.push_back(x.second);
    }
    return ans;
  }
};
