class Solution {
  public:
    int maxRemove(vector<vector<int>>& stones) {
        int n = stones.size() , ans = 0 ;
        map<int , vector<int>> row , col ;
        for(int i = 0 ; i < n ; i ++ ){
            int r = stones[i][0] , c = stones[i][1] ;
            row[r].push_back(i) ;
            col[c].push_back(i) ;
        }
        vector<bool>vis(n , 0) ;
        for(int i = 0 ; i < n ; i ++){
            if(!vis[i]){
                ans ++ ;
                vis[i] = 1 ;
                queue<int> q ;
                q.push(i) ;
                while(!q.empty()){
                    int temp = q.front() ;
                    q.pop() ;
                    int r = stones[temp][0] , c = stones[temp][1] ;
                    for(int x : row[r]){
                        if(!vis[x]) q.push(x) ;
                        vis[x] = 1 ;
                    }
                    for(int y : col[c]){
                        if(!vis[y]) q.push(y) ;
                        vis[y] = 1 ;
                    }
                    row.erase(r) ;
                    col.erase(c) ;
                }
            }
        }
        return n - ans ;
    }
};
