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
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<vector<int>> adj) {
        // code here
        vector<int> vis(V,0);
        vector<int> dfsVis(V,0);
        for(int i=0;i<V;i++){
            if(checkCycleDFS(i,adj,vis,dfsVis)==true)
                return true;
        }
        return false;
    }
};
