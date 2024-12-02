class Solution {
  public:
    void dfs(int node,vector<int> &vis,stack<int> &st,vector<vector<int>>& adj){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,st,adj);  // Recur for unvisited neighbors
            }
        }
        // Push the current node to the stack after visiting all its neighbors
        st.push(node);
    }
    // Function to return list containing vertices in Topological order.
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        // Your code here
        int V=adj.size();
        vector<int> vis(V,0);
        stack<int> st;
        // Perform DFS for every unvisited node (Connected Components)
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,vis,st,adj);
            }
        }
        // Extract elements from the stack to form the topological order
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
