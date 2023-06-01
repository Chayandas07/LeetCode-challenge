class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0] != 0 || grid[n-1][n-1] != 0) return -1;
        queue<pair<int,int>> q;
        q.push({0,0});
        pair<int,int>dirs[8] = {{0,1},{1,0},{0,-1},{-1,0},{-1,-1},{1,1},{1,-1},{-1,1}};
        int dx,dy;
        grid[0][0] = 1;
        while(!q.empty()){
            pair<int,int> curr = q.front();
            q.pop();
            if(curr.first == n - 1 && curr.second == n-1) return grid[curr.first][curr.second];
            for(auto x:dirs){
                dx = x.first + curr.first;
                dy = x.second + curr.second;
                if(dx >= 0 && dy >= 0 && dx < n && dy < n && grid[dx][dy] == 0){
                    q.push({dx,dy});
                    grid[dx][dy]=grid[curr.first][curr.second]+1; 
                }
            }
        }
        
       return -1;
        
        
    }
};
