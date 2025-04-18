class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size();
        int m=s.size();
        int cookie=0,child=0;
        while(child<n && cookie<m){
            if(s[cookie]>=g[child]){
                child++;
            }
            cookie++;
        }   
        return child;
    }
};