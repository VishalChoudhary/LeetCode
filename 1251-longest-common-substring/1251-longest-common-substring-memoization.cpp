#include<bits/stdc++.h>
int f(int ind1,int ind2,string &s1,string &s2,vector<vector<int>> &dp,int &maxi){
    if(ind1<0 || ind2<0)
         return 0;
    if(dp[ind1][ind2]!=-1)
        return dp[ind1][ind2];
    if(s1[ind1]==s2[ind2]){
        dp[ind1][ind2]=1+f(ind1-1,ind2-1,s1,s2,dp,maxi);
        maxi=max(maxi,dp[ind1][ind2]);
        return dp[ind1][ind2];
    }
    dp[ind1][ind2] = 0; // No common substring here
    return 0;
    }
int lcs(string &str1, string &str2){
    // Write your code here.
    int n=str1.size();
    int m=str2.size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    int maxi=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            f(i, j, str1, str2, dp, maxi);
        }
    }
    return maxi;
}
