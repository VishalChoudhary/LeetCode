class Solution {
public:
    //  tabulation
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        if(totalSum-target < 0 || (totalSum-target)%2!=0) return 0;
         int subsetSum = (totalSum-target)/2;
        vector<vector<int>> dp(n, vector<int>(subsetSum+1,0));
        dp[0][0]=1;
        for(int sum=0;sum<=subsetSum;sum++){
            if(nums[0]==0 && sum==0) dp[0][sum]=2;
            else if(nums[0]==sum) dp[0][sum]=1;
        }
        for(int ind=1;ind<n;ind++){
            for(int sum=0;sum<=subsetSum;sum++){
                int notPick=dp[ind-1][sum];
                int pick=0;
                if(nums[ind]<=sum) pick=dp[ind-1][sum-nums[ind]];
                dp[ind][sum]=pick+notPick;
            }
        }
        return dp[n-1][(totalSum - target)/2];
    }
};