class Solution {
  public:
    // Function to find the shortest path in an unweighted, undirected graph using BFS
    vector<int> shortestPath(vector<vector<int>>& edges, int N, int M, int src) {
        // Create adjacency list for the graph
        vector<vector<int>> adj(N); 
        for (auto it : edges) { 
            adj[it[0]].push_back(it[1]); // Add edge from node u to v
            adj[it[1]].push_back(it[0]); // Add edge from node v to u (since the graph is undirected)
        }
        
        // Initialize distances with a large value (infinity)
        vector<int> dis(N, 1e9); 
        dis[src] = 0; // Distance to the source node is zero
        
        // Perform BFS starting from the source node
        queue<int> q; 
        q.push(src);
        while (!q.empty()) {
            int node = q.front(); // Get the front node from the queue
            q.pop();
            
            // Traverse all neighbors of the current node
            for (auto it : adj[node]) {
                // If a shorter path to the neighbor is found
                if (dis[node] + 1 < dis[it]) {
                    dis[it] = 1 + dis[node]; // Update the distance to the neighbor
                    q.push(it); // Push the neighbor into the queue for further processing
                }
            }
        }
        
        // Replace unreachable nodes' distances with -1
        for (int i = 0; i < N; i++) {
            if (dis[i] == 1e9) {
                dis[i] = -1; 
            }
        }
        
        return dis; // Return the shortest distances
    }
};
