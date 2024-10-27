#include<bits/stdc++.h>
int lcs(string &s1, string &s2){
    // Write your code here.
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    int ans=0;
    for(int ind1=1;ind1<=n;ind1++){
        for(int ind2=1;ind2<=m;ind2++){
            if(s1[ind1-1]==s2[ind2-1]){
            dp[ind1][ind2]=1+dp[ind1-1][ind2-1];
            ans=max(ans,dp[ind1][ind2]);
            }
            else{
                dp[ind1][ind2]=0;
            }
        }
    }
    return ans;
}
