class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>a(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!mat[i][j])q.push({i,j});
            }
        }
        int t=0;
        while(q.size()){
            t++;
            int k=q.size();
            while(k--){
                auto  g= q.front();
                int x=g.first,y=g.second;
                q.pop();
                int dx[4]={1,-1,0,0};
                int dy[4]={0,0,1,-1};
                for(int i=0;i<4;i++){
                    int nx=x+dx[i],ny=dy[i]+y;
                    if(nx>=0 && nx<n && ny>=0 && ny<m && mat[nx][ny]){
                        mat[nx][ny]=0;
                        a[nx][ny]=t;
                        q.push({nx,ny});
                    }
                }
            }
        }
        return a;
    }
};
