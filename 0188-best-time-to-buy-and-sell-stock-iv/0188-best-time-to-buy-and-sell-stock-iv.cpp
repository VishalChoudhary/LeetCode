class Solution {
public:
    //SO
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> ahead(2,vector<int>(k+1,0));
        vector<vector<int>> curr(2,vector<int>(k+1,0));
        //no need to include base case as it outputs 0 and in dp we declared default val as 0
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0; buy<=1; buy++){
                //reason for cap from 1 bcz cap=0 is base case which is already covered
                for(int cap=1;cap<=k;cap++){ 
                    if(buy){
                        curr[buy][cap]=max(-prices[ind]+ahead[0][cap],0+ahead[1][cap]);
                    }
                    else{
                        curr[buy][cap]=max(prices[ind]+ahead[1][cap-1],0+ahead[0][cap]);
                    }   
                }  
            }
            ahead=curr;
        }
        return ahead[1][k];
    }
};