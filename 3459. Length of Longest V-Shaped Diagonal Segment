class Solution {
public:
    int dr[4] = {-1, 1, 1, -1};
    int dc[4] = {1, 1, -1, -1};

    bool inBounds(int r, int c, int n, int m) {
        return r >= 0 && r < n && c >= 0 && c < m;
    }

    int dfs(vector<vector<int>>& grid, int r, int c, int dir, bool canChange, int len, int searchFor) {
        int n = grid.size();
        int m = grid[0].size();
        int maxi = len;
        
        if (dir != -1) {
            int nr = r + dr[dir];
            int nc = c + dc[dir];
            if (inBounds(nr, nc, n, m) && grid[nr][nc] == searchFor) {
                int nextVal = (searchFor == 2) ? 0 : 2;
                maxi = max(maxi, dfs(grid, nr, nc, dir, canChange, len + 1, nextVal));
            }
        }

        if (dir != -1 && canChange) {
            int ndir = (dir + 1) % 4;
            int nr = r + dr[ndir];
            int nc = c + dc[ndir];
            if (inBounds(nr, nc, n, m) && grid[nr][nc] == searchFor) {
                int nextVal = (searchFor == 2) ? 0 : 2;
                maxi = max(maxi, dfs(grid, nr, nc, ndir, false, len + 1, nextVal));
            }
        }

        if (dir == -1) {
            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if (inBounds(nr, nc, n, m) && grid[nr][nc] == searchFor) {
                    int nextVal = (searchFor == 2) ? 0 : 2;
                    maxi = max(maxi, dfs(grid, nr, nc, i, canChange, len + 1, nextVal));
                }
            }
        }

        return maxi;
    }

    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    maxi = max(maxi, dfs(grid, i, j, -1, true, 1, 2));
                }
            }
        }
        return maxi;
    }
};
