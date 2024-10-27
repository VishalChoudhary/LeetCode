#include<bits/stdc++.h>
int lcs(string &s1, string &s2){
    // Write your code here.
    int n=s1.size();
    int m=s2.size();
    vector<int> prev(m+1,0), curr(m+1,0);
    int ans=0;
    for(int ind1=1;ind1<=n;ind1++){
        for(int ind2=1;ind2<=m;ind2++){
            if(s1[ind1-1]==s2[ind2-1]){
            curr[ind2]=1+prev[ind2-1];
            ans=max(ans,curr[ind2]);
            }
            else{
                curr[ind2]=0;
            }
        }
        prev=curr;
    }
    return ans;
}
