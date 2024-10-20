#include <bits/stdc++.h> 
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    vector<int> prev(m,0),curr(m,0);
    // base case
    for(int j=0;j<m;j++){
        prev[j]=matrix[0][j];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            int up=matrix[i][j]+prev[j];
            int ld=INT_MIN;
            if(j-1>=0) ld=matrix[i][j]+prev[j-1];
            int rd=INT_MIN;
            if(j+1<m) rd=matrix[i][j]+prev[j+1];
            curr[j]=max(up,max(ld,rd));
        }
        prev=curr;
    }
    int maxi=INT_MIN;
    for(int j=0;j<m;j++){
        maxi=max(maxi,prev[j]);
    }
    return maxi;
}
