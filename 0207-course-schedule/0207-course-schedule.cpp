class Solution {
public:
    bool checkCycleDFS(int node,vector<vector<int>> &adj,vector<int> &vis,vector<int> &dfsVis){
        vis[node]=1;
        dfsVis[node]=1;
        for(auto it : adj[node]){
            if(!vis[it]){
                if(checkCycleDFS(it,adj,vis,dfsVis)==true)
                    return true;
            }
            else if(dfsVis[it]==1){
                return true;
            }
        }
        dfsVis[node]=0;
        return false;
    }
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(V);
        for (auto &pre : prerequisites) {
            adj[pre[1]].push_back(pre[0]); // Directed edge: pre[1] -> pre[0]
        }
        vector<int> vis(V,0);
        vector<int> dfsVis(V,0);
        for(int i=0;i<V;i++){
            if(checkCycleDFS(i,adj,vis,dfsVis)==true)
                return false;
        }
        return true;
    }
};