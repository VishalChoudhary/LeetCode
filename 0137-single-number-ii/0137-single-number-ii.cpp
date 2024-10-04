class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return nums[0];
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            umap[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            auto it=umap.find(nums[i]);
            if(it->second==1){
                return nums[i];
            }
        }
        return 0;
    }
};