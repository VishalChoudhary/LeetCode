class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
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
                int ld=INT_MAX;
                if(j-1>=0) ld=matrix[i][j]+prev[j-1];
                int rd=INT_MAX;
                if(j+1<m) rd=matrix[i][j]+prev[j+1];
                curr[j]=min(up,min(ld,rd));
            }
            prev=curr;
        }
        int mini=INT_MAX;
        for(int j=0;j<m;j++){
            mini=min(mini,prev[j]);
        }
        return mini;
    }
};