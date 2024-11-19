class Solution {
public:
    int f(vector<int>& arr, int i, int j, vector<vector<int>>& dp) {
        if (i == j) // Base case: if there's only one point, no triangle can be formed
            return 0;
        
        if (dp[i][j] != -1)
            return dp[i][j];

        int mini = INT_MAX;
        // Adjusted loop to iterate from i to j-1
        for (int k = i; k <= j - 1; k++) {
            // Compute cost of triangulating between i, k, and j
            int cost = f(arr, i, k, dp) + f(arr, k + 1, j, dp) + arr[i - 1] * arr[k] * arr[j];
            mini = min(mini, cost);
        }
        dp[i][j] = mini;
        return dp[i][j];
    }

    int minScoreTriangulation(vector<int>& values) {
        int N = values.size();
        vector<vector<int>> dp(N, vector<int>(N, -1));
        return f(values, 1, N - 1, dp); // Start from 1 to N-1 to match the modified indexing
    }
};
