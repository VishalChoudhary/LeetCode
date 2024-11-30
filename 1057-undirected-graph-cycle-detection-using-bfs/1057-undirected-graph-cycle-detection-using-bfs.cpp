class Solution {
public:
    // Helper function to detect a cycle in a component using BFS
    bool detect(int src, vector<vector<int>>& adj, vector<int>& vis) {
        vis[src] = 1; // Mark the source node as visited
        queue<pair<int, int>> q; // Queue to store {current node, parent node}
        q.push({src, -1}); // Push the source node with no parent (-1)

        while (!q.empty()) {
            int node = q.front().first;   // Current node
            int parent = q.front().second; // Parent of the current node
            q.pop();

            // Traverse all adjacent nodes of the current node
            for (auto it : adj[node]) {
                if (!vis[it]) { // If the adjacent node is unvisited
                    vis[it] = 1; // Mark it as visited
                    q.push({it, node}); // Push the node with the current node as its parent
                } 
                // If the adjacent node is visited and not the parent, a cycle is detected
                else if (parent != it) {
                    return true; // Cycle found
                }
            }
        }
        return false; // No cycle found in this component
    }

    // Function to detect a cycle in an undirected graph
    bool isCycle(vector<vector<int>>& adj) {
        int V = adj.size(); // Number of vertices in the graph
        vector<int> vis(V, 0); // Visited array to track visited nodes

        // Check for cycles in each connected component
        for (int i = 0; i < V; i++) {
            if (!vis[i]) { // If the node is unvisited
                if (detect(i, adj, vis)) { // Perform BFS to detect cycle
                    return true; // If a cycle is found, return true
                }
            }
        }
        return false; // No cycle found in any component
    }
};
