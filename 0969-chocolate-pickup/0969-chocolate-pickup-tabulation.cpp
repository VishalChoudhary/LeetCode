#include <bits/stdc++.h> 
int maximumChocolates(int n, int m, vector<vector<int>> &grid) {
    vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,0)));
    //base case
    for(int j1=0;j1<m;j1++){
        for(int j2=0;j2<m;j2++){
            if(j1==j2) dp[n-1][j1][j2]=grid[n-1][j1];
            else dp[n-1][j1][j2]=grid[n-1][j1]+grid[n-1][j2];
        }
    }
    for(int i=n-2;i>=0;i--){
        for(int j1=0;j1<m;j1++){
            for(int j2=0;j2<m;j2++){
                int maxi=-1e8;
                for(int dj1=-1;dj1<=+1;dj1++){
                    for(int dj2=-1;dj2<=+1;dj2++){
                        int value=0;
                        if(j1==j2) value=grid[i][j1];
                        else value=grid[i][j1]+grid[i][j2];
                        if(j1+dj1>=0 && j1+dj1<m && j2+dj2>=0 && j2+dj2<m)
                            value+=dp[i+1][j1+dj1][j2+dj2];
                        else
                            value+=-1e8;
                        maxi=max(maxi,value);
                    }
                }
                dp[i][j1][j2]=maxi;
            }
        }
    }
    return dp[0][0][m-1];
}
