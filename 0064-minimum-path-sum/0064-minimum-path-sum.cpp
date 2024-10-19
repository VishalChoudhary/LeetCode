class Solution {
    //memoization
    int f(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        // Base case: If we're at the top-left corner, return its value
        if (i == 0 && j == 0) {
            return grid[0][0];
        }
        // If out of bounds, return a large number (equivalent to infinity)
        if (i < 0 || j < 0) {
            return INT_MAX;
        }
        // If the value has already been computed, return it from dp
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        // Recursive call to explore the path from top (i-1, j) and left (i, j-1)
        int up = INT_MAX, left = INT_MAX;
        if (i > 0) {
            up = f(i - 1, j, grid, dp);
        }
        if (j > 0) {
            left = f(i, j - 1, grid, dp);
        }
        
        // Take the minimum of both paths and add the current cell's value
        dp[i][j] = grid[i][j] + min(up, left);
        
        // Return the result stored in dp[i][j]
        return dp[i][j];
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f(m-1,n-1,grid,dp);
    }
};