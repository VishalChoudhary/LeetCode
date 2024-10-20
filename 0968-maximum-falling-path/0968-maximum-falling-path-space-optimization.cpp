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
    }