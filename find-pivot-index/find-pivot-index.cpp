class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sufsum=0,presum=0;
        for(int i=0;i<n;i++){
            sufsum+=nums[i];          
        }
        for(int i=0;i<n;i++){
            sufsum-=nums[i];
            if(sufsum==presum)
                return i;
            presum+=nums[i];
        }
        return -1;
    }
};