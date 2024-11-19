class Solution {
public:
    int f(vector<int>& arr, int i, int j, vector<vector<int>>& dp) {
        if (i + 1 == j) // No triangle can be formed between two adjacent points
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int mini = INT_MAX;
        for (int k = i + 1; k < j; k++) { // k ranges from i+1 to j-1 to ensure valid triangles
            int cost = f(arr, i, k, dp) + f(arr, k, j, dp) + arr[i] * arr[k] * arr[j];
            mini = min(mini, cost);
        }
        dp[i][j] = mini;
        return dp[i][j];
    }
    int minScoreTriangulation(vector<int>& values) {
        int N = values.size();
        vector<vector<int>> dp(N, vector<int>(N, -1));
        return f(values, 0, N - 1, dp); // Start from 0 to N-1
    }
};
