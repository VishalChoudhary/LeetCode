class Solution {
public:
    //using hashing
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n<1)
        return -1;
        if(n==1)
        return nums[0];
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            auto it=mpp.find(nums[i]);
            if(it->second>1){
                return nums[i];
            }
        }
        return 0;
    }
};