class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            umap[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            auto it=umap.find(nums[i]);
            if(it->second==1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};