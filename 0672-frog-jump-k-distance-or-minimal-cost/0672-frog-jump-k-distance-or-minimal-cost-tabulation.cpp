class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int> dp(n,0);
        dp[0]=0;
        for(int i=1;i<n;i++){
            int minSteps=INT_MAX;
            for(int j=1; j<=k; j++){
            if(i-j>=0){
                int jump=dp[i-j]+abs(arr[i]-arr[i-j]);
                minSteps=min(jump,minSteps);
                }
            }
            dp[i]=minSteps;
        }
        return dp[n-1];
    }
};
