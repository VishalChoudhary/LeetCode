class Solution{
  public:
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int> umap;
        for(int i=0;i<n;i++){
            umap[arr[i]]++;
        }
        string name="";
     