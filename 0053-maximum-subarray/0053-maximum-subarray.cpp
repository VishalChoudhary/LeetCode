class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxm= INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>maxm)
            maxm=sum;
            if(sum<0)
            sum=0;
        }
        return maxm;
    }
};