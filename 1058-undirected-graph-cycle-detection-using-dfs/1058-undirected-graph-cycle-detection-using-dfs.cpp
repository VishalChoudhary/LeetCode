class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfsDetect(int node,int parent,vector<vector<int>>& adj,vector<int> &vis){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                // Recursively call dfsDetect for the adjacent node
                if(dfsDetect(it,node,adj,vis)==true)
                    // If a cycle is detected, propagate 'true' up the recursion stack
                    return true;  
            }
            else if(parent != it)
                return true;
        }
        return false;
    }
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        int V=adj.size();
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfsDetect(i,-1,adj,vis)==true)
                    return true;
            }
        }
        return false;
    }
};
