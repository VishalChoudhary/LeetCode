class Solution {
public:
    int f(int ind,int sum,vector<int>& arr,vector<vector<int>> &dp){
        if(ind==0) {
        if(sum==0) 
            return(arr[ind]==0)?2:1;
        else
            return (arr[ind]==sum)?1:0;
        }
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        int notPick=f(ind-1,sum,arr,dp);
        int pick=0;
        if(arr[ind]<=sum) pick=f(ind-1,sum-arr[ind],arr,dp);
        return dp[ind][sum]=pick+notPick;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        if(totalSum-target <0 || (totalSum-target)%2!=0) return 0;
        vector<vector<int>> dp(n, vector<int>((totalSum-target)/2+1,-1));
        return f(n-1,(totalSum - target)/2,nums,dp);

    }
};