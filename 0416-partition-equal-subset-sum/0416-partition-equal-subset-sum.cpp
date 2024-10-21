class Solution {
public:
    //memoization
    int f(int ind, int target,vector<int> &arr,vector<vector<int>> &dp){
        //base case
        if(target==0) return true;
        if(ind==0) return (arr[0]==target);
        if(dp[ind][target]!=-1) return dp[ind][target];
        bool notTake=f(ind-1,target,arr,dp);
        bool take=false;
        if(arr[ind]<=target) take=f(ind-1,target-arr[ind],arr,dp);
        return dp[ind][target]=take | notTake;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        //odd no case
        if(totalSum%2!=0) return false;
        int k=totalSum/2;
        vector<vector<int>> dp(n, vector<int>(k+1,-1));
        return f(n-1,k,nums,dp);
    }
};