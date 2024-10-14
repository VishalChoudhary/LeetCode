// memoization
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1, 0);
        dp[0] = 0;
        dp[1] = 0;
        for (int i = 2; i <=n; i++) {
            int left = dp[i - 1] + cost[i - 1];
            int right = INT_MAX;
            if (i > 1)
                right = dp[i - 2] +  cost[i - 2];
            dp[i] = min(left, right);
        }
        return dp[n];
    }
};