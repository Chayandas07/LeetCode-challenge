class Solution {
    void bfs(vector<vector<int>> &visited,vector<vector<int>> &isWater,vector<vector<int>> &ans,queue<pair<int,int>> &q){
        // visited[i][j]=1;
        int n=isWater.size(),m=isWater[0].size();
        vector<int> newx={0,1,0,-1};
        vector<int> newy={-1,0,1,0};
        // q.push({i,j});
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int new_x=x+newx[k];
                int new_y=y+newy[k];
                if(new_x>=0 and new_x<n and new_y>=0 and new_y<m and ans[new_x][new_y]==-1){
                    ans[new_x][new_y]=1+ans[x][y];
                    visited[new_x][new_y]=1;
                    q.push({new_x,new_y});
                }
            }
        }
    }
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n=isWater.size(),m=isWater[0].size();
        vector<vector<int>> visited(n,vector<int> (m,0));
        vector<vector<int>> ans(n,vector<int> (m,-1));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j]==1){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        bfs(visited,isWater,ans,q);
        return ans;
    }
};
