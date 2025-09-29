class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        vector<vector<string>> ans;
        for(auto x:strs){
            string temp=x;
            sort(x.begin(),x.end());
            umap[x].push_back(temp);
        }
        for(auto x:umap){
            ans.push_back(x.second);
        }
        return ans;
    }
};