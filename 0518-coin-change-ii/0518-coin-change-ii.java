class Solution {
    public int change(int amount, int[] coins) {

        int n = coins.length;
        int[][] dp = new int[n][amount + 1];

        for(int i = 0 ; i <= amount ; i++)
            if(i % coins[0] == 0)
                dp[0][i] = 1;

        for(int i = 1 ; i < n ; i++){
            for(int sum = 0 ; sum <= amount; sum++){

                int pick = 0;

                if(coins[i] <= sum){
                    pick = dp[i][sum - coins[i]];
                }

                int not_pick = dp[i - 1][sum];

                dp[i][sum] = pick + not_pick;

            }
        }

        return dp[n - 1][amount];
    }
}