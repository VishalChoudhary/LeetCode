class Solution {
public:
    int f(int i,int j,vector<vector<int>> &dp,vector<vector<int>>& obstacleGrid){
        // Base case: If we reach the top-left corner (0, 0), there is one way.
        // If the starting point has an obstacle, no paths are possible
        if (obstacleGrid[0][0] == 1) 
            return 0;
        if(i==0 && j==0)
            return 1;
        // If we go out of bounds
        if(i<0 || j<0) 
            return 0;
        //if we face any obstacle
        if(i>=0 && j>=00 && obstacleGrid[i][j]==1)
            return 0;
        if (dp[i][j]!=-1)
            return dp[i][j];
        int up=f(i-1,j,dp,obstacleGrid);
        int left=f(i,j-1,dp,obstacleGrid);
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f(m-1,n-1,dp,obstacleGrid);
    }
};