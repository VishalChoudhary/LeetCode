class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(V);
        // Build the adjacency list from prerequisites
        for (auto it : prerequisites) {
            adj[it[1]].push_back(it[0]); // Directed edge it[1] -> it[0]
        }
        vector<int> inDegree(V,0);
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                inDegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0;i<V;i++){
            if(inDegree[i]==0)
                q.push(i);
        }
        int cnt=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            cnt++;
            for(auto it:adj[node]){
                inDegree[it]--;
                if(inDegree[it]==0)
                    q.push(it);
            }
        }
        if(cnt==V) 
            return true;
        return false;
    }
};