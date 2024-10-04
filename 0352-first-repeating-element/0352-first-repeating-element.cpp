class Solution {
  public:
    int firstRepeated(vector<int> &nums) {
        // code here
        int n=nums.size();
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            umap[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            auto it=umap.find(nums[i]);
            if(it->second>1){
                return i+1;
                break;
            }
        }
        return -1;
    }
};
