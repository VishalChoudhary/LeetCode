class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dis(n+1,1e9);
        dis[k]=0;
        for(int i=0;i<n;i++){
            for(auto it:times){
                int u=it[0];
                int v=it[1];
                int wt=it[2];
                if(dis[u] != 1e8 && dis[u]+wt<dis[v]){
                    dis[v]=dis[u]+wt;
                }
            }
        }
        int maxwait=0;
        for(int i=1;i<=n;i++){
            maxwait=max(maxwait,dis[i]);
        }
        return maxwait == 1e9 ? -1: maxwait;
    }
};