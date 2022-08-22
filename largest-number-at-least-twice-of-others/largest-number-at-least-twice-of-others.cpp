class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxm=0,res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxm){
                maxm=nums[i];
                res=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(maxm!=nums[i] && (maxm<nums[i]*2))
                return -1;
        }
        return res;
    }
};