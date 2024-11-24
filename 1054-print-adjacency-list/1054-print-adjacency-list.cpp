class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Code here
        int n=V;
        int m=edges.size();
        vector<vector<int>> adj(n);
        for(int i=0;i<m;i++){
            int u,v;
            u=edges[i].first;
            v=edges[i].second;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return adj;
    }
};
