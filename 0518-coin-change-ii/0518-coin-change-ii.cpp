class Solution {
public:
    int change(int amount, vector<int>& coins) {
        //Using unsigned instead of int prevents signed integer overflow 
        vector<vector<unsigned>> g(coins.size() + 1, vector<unsigned> (amount+1));
        for(int i = 0 ; i < coins.size()+1; i++){
            g[i][0] = 1;
        }
        for(int i = 1; i <= coins.size(); i++){
            for(int j = 1; j <=amount; j++){
                if(j - coins[i-1] < 0){
                    g[i][j] = g[i-1][j];
                }else{
                    g[i][j] = g[i-1][j]+ g[i][j-coins[i-1]];
                }
            }
        }
        return g[coins.size()][amount];
    }
};