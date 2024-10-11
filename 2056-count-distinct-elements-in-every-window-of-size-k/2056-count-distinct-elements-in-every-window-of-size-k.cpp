class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
                        umap[A[i-k]]--;
            umap[A[i]]++;
            ans.push_back(umap.size());
        }
        return ans;
    }
};