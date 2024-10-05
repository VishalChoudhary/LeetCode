class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto x:nums){
            umap[x]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(umap[a]!=umap[b]){
                return umap[a]<umap[b];
            }
            return a>b;
        });
        return nums;
    }
};