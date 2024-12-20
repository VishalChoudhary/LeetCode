class Solution {
  public:
    void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<int>> &grid,
    pair<int, int> &destination,int &shortDis){
        queue<pair<pair<int,int>,int>> q;
        q.push({{row,col},0});
        vis[row][col]=1;
        
        int n=grid.size();
        int m=grid[0].size();
        vector<int> drow = {-1, 0, +1, 0};
        vector<int> dcol = {0, +1, 0, -1};
        
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int dis=q.front().second;
            q.pop();
            
            //if destination reached update shortest Distance and exit
            if(r==destination.first && c==destination.second){
                shortDis=dis;
                return;
            }
            
            for(int i=0;i<4;i++){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];
                
                //check for valid cell & not visited
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                    q.push({{nrow,ncol},dis+1});
                    vis[nrow][ncol]=1;
                }
            }
        }
    }
    
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        if(grid[source.first][source.second]==0 || grid[destination.first][destination.second]==0)
            return -1;
        if (source == destination)
            return 0;
        int shortDis=-1;
        bfs(source.first,source.second,vis,grid,destination,shortDis);
        return shortDis;
    }
};
