class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> umap;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int pair=target-arr[i];
            if(umap.find(pair)!=umap.end()){
                return {umap[pair],i};
            }
            umap[arr[i]]=i;
        }
        return {};
    }
};