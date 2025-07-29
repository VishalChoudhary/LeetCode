class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            int pair=target-nums[i];
            if(umap.find(pair)!=umap.end()){
                return {umap[pair],i};
            }
            umap[nums[i]]=i;
        }
        return {-1,-1};
    }
};