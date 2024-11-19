class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        int N=values.size();
        vector<vector<int>> dp(N,vector<int>(N,0));
        for(int i=0;i<N;i++){
            dp[i][i]=0;
        }
        for(int i=N-1;i>=1;i--){
            for(int j=i+1;j<N;j++){
                int mini=1e9;
                for(int k=i;k<=j-1;k++){
                int cost=dp[i][k]+dp[k+1][j]+values[i-1]*values[k]*values[j];
                mini=min(mini,cost);
                }
                dp[i][j]=mini;
            }
        }
        return dp[1][N-1];
    }
};