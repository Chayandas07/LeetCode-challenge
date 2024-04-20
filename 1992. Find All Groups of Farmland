class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        int n = land.size(), m = land[0].size(), flag;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(land[i][j] == 1 && ((i == 0 || land[i-1][j] == 0) && (j == 0  || land[i][j-1] == 0))){
                    int i_ = i, j_ = j;
                    while(i_ < n && land[i_][j_] == 1)
                        i_++;
                    i_--;
                    while(j_ < m && land[i_][j_] == 1)
                        j_++;
                    j_--;

                    ans.push_back({i, j, i_, j_});
                    j = j_;
                }
            }
        }  
        return ans;
    }
};
