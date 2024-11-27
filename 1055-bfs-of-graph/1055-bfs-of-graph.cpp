class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        int V = adj.size(); // Number of vertices
        vector<int> vis(V, 0); // Visited array
        vector<int> bfs; // Result array
        
        queue<int> q;
        vis[0] = 1; // Mark the first node as visited
        q.push(0); // Start BFS from node 0
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            // Traverse all neighbors of the current node
            for (auto neighbor : adj[node]) {
                if (!vis[neighbor]) {
                    vis[neighbor] = 1;
                    q.push(neighbor);
                }
            }
        }
        
        return bfs;
    }
};
