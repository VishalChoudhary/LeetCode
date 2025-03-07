class Solution {
public:
    int f(int i,int j,vector<int> &arr,vector<vector<int>> &dp){
        if(i>j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int maxi=-1e9;
        for(int ind=i;ind<=j;ind++){
            int cost=arr[i-1]*arr[ind]*arr[j+1]+f(i,ind-1,arr,dp)+f(ind+1,j,arr,dp);
            maxi=max(maxi,cost);
        }
        return dp[i][j]=maxi;
    }
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return f(1,n,nums,dp);
    }
};