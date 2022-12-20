class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> vr(rooms.size(), 0);// visited(0-unvisited, 1-visited)
        
        dfs(rooms, vr, 0);
        
        for(int i=0; i<vr.size(); i++)  if(vr[i]<1) return false;
        return true;
    }
    
    void dfs(vector<vector<int>>& rooms, vector<int>& vr, int i){
        if(0<vr[i]) return;
        vr[i]=1;
        
        for(int j=0; j<rooms[i].size(); j++)    dfs(rooms, vr, rooms[i][j]);
        
        return ;
    }
};
