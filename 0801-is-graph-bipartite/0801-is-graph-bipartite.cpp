class Solution {
public:
    //BFS
    bool bfs(int start,int V, vector<int> &col, vector<vector<int>>& graph){
        queue<int> q;
        q.push(start);
        col[start]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:graph[node]){
                //if the adj node is not yet colored
                //give the opp color of the node
                if(col[it]==-1){
                    col[it] = !col[node];
                    q.push(it);
                }
                //if the adj node has same color
                //some node already colored it on diff path
                else if(col[it]==col[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int> col(V,-1);
        for(int i=0;i<V;i++){
            if(col[i]==-1){
                if(bfs(i,V,col,graph)==false)
                    return false;
            }
        }
        return true;
    }
};