class Solution {
  public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex src.
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
        // Code here
        int V=adj.size();
        // The pair now stores {vertex, distance}, and the queue is a min-heap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dis(V,1e9);
        vector<int> parent(V,-1);
        // Initialize the source vertex
        dis[src]=0;  // Distance to the source is 0
        pq.push({src,0});  // Push the source with node first and distance second
        while(!pq.empty()){
            auto it=pq.top();  // Get the element with the smallest distance
            pq.pop();
            int node=it.first;  // Current node being processed
            int dist=it.second;  // Current shortest distance to this node
            for(auto i:adj[node]){
                int adjNode=i.first;  // Adjacent node    
                int wt=i.second;  // Weight of the edge to the adjacent node
                // Relaxation step: update the distance if a shorter path is found
                if (dist + wt < dis[adjNode]) {
                    dis[adjNode] = dist + wt;       // Update the shortest distance
                    pq.push({adjNode, dis[adjNode]}); // Push the updated node into the priority queue
                    parent[adjNode] = node;         // Update the parent for path reconstruction
                }
            }
        }
        return dis;
    }
};
