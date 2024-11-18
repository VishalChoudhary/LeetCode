class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        int N=values.size();
        vector<vector<int>> dp(N, vector<int>(N, -1));
        // Initialize the diagonal elements of the DP table to 0
        for (int i = 0; i < N; i++) {
            dp[i][i] = 0;
        }
        // Loop for the length of the chain
        for (int len = 2; len < N; len++) {
            for (int i = 1; i < N - len + 1; i++) {
                int j = i + len - 1;
                dp[i][j] = INT_MAX;
                // Try different partition points to find the minimum
                for (int k = i; k < j; k++) {
                    int cost = dp[i][k] + dp[k + 1][j] + values[i - 1] * values[k] * values[j];
                    dp[i][j] = min(dp[i][j], cost);
                }
            }
        }
        // The result is stored in dp[1][N-1]
        return dp[1][N - 1];
    }
};