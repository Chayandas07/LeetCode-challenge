char grid[100000];
class Solution {
public:
    int m, n, comp;
    int d[5] = {0, 1, 0, -1, 0};
    inline int idx(int r, int c) { return r * n + c; }
    inline void cross(int r, int c) {
        for (int a = 0; a < 4; a++) {
            int di = d[a], dj = d[a + 1];
            for (int i = r + di, j = c + dj;; i += di, j += dj) {
                int pos = idx(i, j);
                if (i < 0 || i >= m || j < 0 || j >= n || grid[pos] == 'X')
                    break;
                comp -= (grid[pos] == ' ');
                grid[pos] = 'V';
            }
        }
    }

    int countUnguarded(int m, int n, vector<vector<int>>& guards,
                       vector<vector<int>>& walls) {
        this->m = m, this->n = n;
        comp = m * n;
        memset(grid, ' ', m * n);

        for (auto& ij : walls) {
            grid[idx(ij[0], ij[1])] = 'X';
            comp--;
        }

        for (auto& ij : guards) {
            grid[idx(ij[0], ij[1])] = 'X';
            comp--;
        }

        for (auto& ij : guards) {
            cross(ij[0], ij[1]);
        }
        return comp;
    }
};
