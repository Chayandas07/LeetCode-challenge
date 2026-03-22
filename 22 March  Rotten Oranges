class Solution {
  public:
    int orangesRot(vector<vector<int>>& mat) {
        int n = mat.size() , m = mat[0].size();
        queue<vector<int>>q;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(mat[i][j] == 2)
                    q.push({i , j , 0});
        int time = 0;
        vector<int>dx = {-1 , 1 , 0 , 0};
        vector<int>dy = {0 , 0 , -1 , 1};
        while(!q.empty()){
            vector<int>v = q.front();
            q.pop();
            int i = v[0] , j = v[1] , t = v[2];
            time = max(time , t);
            for(int k = 0; k < 4; k++){
                int x = i + dx[k] , y = j + dy[k];
                if(x >= 0 && x < n && y >= 0 && y < m && mat[x][y] == 1){
                    mat[x][y] = 2;
                    q.push({x , y , t + 1});
                }
            }
        }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(mat[i][j] == 1)
                    time = -1;
        return time;
    }
};
