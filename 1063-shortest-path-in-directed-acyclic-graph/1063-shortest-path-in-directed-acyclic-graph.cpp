class Solution {
  public:
    // Function to perform topological sort on the graph using DFS
    void topoSort(int node, vector<vector<pair<int, int>>> &adj, vector<int> &vis, stack<int> &st) {
        vis[node] = 1; // Mark the current node as visited
        for (auto it : adj[node]) { // Traverse all neighbors of the current node
            int v = it.first; // Get the adjacent node
            if (!vis[v]) { // If the adjacent node is not visited
                topoSort(v, adj, vis, st); // Recursively perform DFS
            }
        }
        st.push(node); // Push the node into the stack after processing all its neighbors
    }

    // Function to find the shortest path from the source to all other vertices in a Directed Acyclic Graph (DAG)
    vector<int> shortestPath(int V, int E, vector<vector<int>> &edges) {
        // Create adjacency list for the graph where each edge contains a weight
        vector<vector<pair<int, int>>> adj(V);
        for (int i = 0; i < E; i++) {
            int u = edges[i][0]; // Source node of the edge
            int v = edges[i][1]; // Destination node of the edge
            int wt = edges[i][2]; // Weight of the edge
            adj[u].push_back({v, wt}); // Add edge to adjacency list
        }
        
        vector<int> vis(V, 0); // Initialize visited array to track visited nodes
        
        stack<int> st; // Stack to store the topological order
        for (int i = 0; i < V; i++) { 
            if (!vis[i]) { // If the node is not visited
                topoSort(i, adj, vis, st); // Perform topological sort
            }
        }
        
        vector<int> dis(V, 1e9); // Initialize distances with a large value
        dis[0] = 0; // Distance to the source is zero
        
        // Process nodes in topological order
        while (!st.empty()) {
            int node = st.top(); // Get the top node from the stack
            st.pop();
            
            if (dis[node] != 1e9) { // If the node is reachable
                for (auto it : adj[node]) { // Traverse all neighbors
                    int v = it.first; // Adjacent node
                    int wt = it.second; // Weight of the edge
                    if (dis[node] + wt < dis[v]) { // Relaxation step
                        dis[v] = dis[node] + wt;
                    }
                }
            }
        }
        
        // Replace unreachable nodes' distances with -1
        for (int i = 0; i < V; i++) {
            if (dis[i] == 1e9)
                dis[i] = -1;
        }
        
        return dis; // Return the shortest distances
    }
};
