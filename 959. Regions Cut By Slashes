class Solution {
private:
    vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    unordered_map<char, vector<vector<int>>> mp = {
        {'/', {{0, 0, 1}, {0, 1, 0}, {1, 0, 0}}},
        {'\\', {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}},
        {' ', {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}}
    };
    vector<vector<int>> zoom(vector<string>& grid){
        int n = grid.size();
        vector<vector<int>> res(3*n, vector<int>(3*n, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int r = 0; r < 3; r++){
                    for(int c = 0; c < 3; c++){
                        res[3*i+r][3*j+c] = mp[grid[i][j]][r][c]; 
                    }
                }
            }
        }
        return res;
    }
    void markRegion(vector<vector<int>>& grid, int r, int c){
        if(grid[r][c] == -1 || grid[r][c] == 1) return;
        grid[r][c] = -1;
        int n = grid.size();
        for(auto& [x, y]: dirs){
            int new_x = r + x, new_y = c + y;
            if(new_x >= 0 && new_y >= 0 && new_x < n && new_y < n) markRegion(grid, new_x, new_y);
        }
    }
public:
    int regionsBySlashes(vector<string>& grid) {
        int cnt = 0;
        vector<vector<int>> zoomed = zoom(grid);
        int n = zoomed.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(zoomed[i][j] == -1 || zoomed[i][j] == 1) continue;
                cnt++;
                markRegion(zoomed, i, j);
            }
        }
        return cnt;
    }
};
