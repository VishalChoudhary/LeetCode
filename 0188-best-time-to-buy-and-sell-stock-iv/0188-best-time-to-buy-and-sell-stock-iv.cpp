class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
       int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>> (2,vector<int>(k+1,0)));
        //no need to include base case as it outputs 0 and in dp we declared default val as 0
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0; buy<=1; buy++){
                //reason for cap from 1 bcz cap=0 is base case which is already covered
                for(int cap=1;cap<=k;cap++){ 
                    if(buy){
                        dp[ind][buy][cap]=max(-prices[ind]+dp[ind+1][0][cap],0+dp[ind+1][1][cap]);
                    }
                    else{
                        dp[ind][buy][cap]=max(prices[ind]+dp[ind+1][1][cap-1],0+dp[ind+1][0][cap]);
                    }   
                }  
            }
        }
        return dp[0][1][k]; 
    }
};