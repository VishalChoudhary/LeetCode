class Solution {
public:
    //space optimization
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<double> prev(m+1,0), curr(m+1,0);
        if (n < m) return 0;
        //bcz we are using only two rows curr and prev so assigning 1 to both rows no need to run loop
        prev[0]=curr[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]){  //comparing is 0 based indexing as string start from 0 index
                    curr[j]=prev[j-1]+prev[j];
                }
                else
                    curr[j]=prev[j];
            }
            prev=curr;
        }
        return (int)prev[m];
    }
};