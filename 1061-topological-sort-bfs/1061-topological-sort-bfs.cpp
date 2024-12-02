class Solution {
  public:
    // Function to return list containing vertices in Topological order.
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        // Your code here
        int V=adj.size();
        vector<int> inDegree(V,0);
        // Calculate in-degrees of all vertices
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                inDegree[it]++;  // Increment in-degree for each adjacent vertex
            }
        }
        queue<int> q;
        // Push all vertices with 0 in-degree into the queue
        for(int i=0;i<V;i++){
            if(inDegree[i]==0)
                q.push(i);
        }
        vector<int> ans;
        while(!q.empty()){
            int node=q.front();  // Get the front vertex in the queue
            q.pop();
            ans.push_back(node); // Add it to the topological order
            for(auto it:adj[node]){
                inDegree[it]--;
                // If in-degree becomes 0, add it to the queue
                if(inDegree[it]==0)
                    q.push(it);
            }
        }
        return ans;
    }
};
