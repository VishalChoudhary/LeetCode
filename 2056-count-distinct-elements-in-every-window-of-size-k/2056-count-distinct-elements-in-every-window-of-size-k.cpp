class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        unordered_map<int,int> umap;
        for(int i=0;i<k;i++){
            umap[A[i]]++;
        }
        vector<int> ans;
        ans.push_back(umap.size());
        for(int i=k;i<n;i++){
            if(umap[A[i-k]]==1)
                umap.erase(A[i-k]);
            else
                umap[A[i-k]]--;
            umap[A[i]]++;
            ans.push_back(umap.size());
        }
        return ans;
    }
};
