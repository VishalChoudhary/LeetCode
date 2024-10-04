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
            int key=nums[i];
            auto it=umap.find(key);
            if(it->second==1)
            return key;
        }
        return 0;
    }
};