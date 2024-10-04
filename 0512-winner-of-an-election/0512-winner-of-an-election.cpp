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
        int max_vote=0;
        for(auto it:umap){
            string key=it.first;
            int value=it.second;
            if(value>max_vote){
                name=key;
                max_vote=value;
            }
            else if(value==max_vote){
                if(key<name)
                    name=key;
            }
        }
        vector<string> ans;
        ans.push_back(name);
        string temp=to_string(max_vote);
        ans.push_back(temp);
        return ans;
    }
};
