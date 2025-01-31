class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        if (grid.empty())
            return 0;

        int n = grid.size();
        vector<vector<int>> labels(n,vector<int>(n, 0));
        unordered_map<int, int> islandSizes;
        int label = 1;
        int maxSize = 0;

        int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1 && labels[i][j] == 0) {
                    int size = 0;
                    vector<pair<int, int>> stack;
                    stack.push_back({i, j});
                    labels[i][j] = label;

                    while (!stack.empty()) {
                        auto [x, y] = stack.back();
                        stack.pop_back();
                        size++;

                        for (auto [dx, dy] : dirs) {
                            int nx = x + dx, ny = y + dy;
                            if (nx >= 0 && nx < n && ny >= 0 && ny < n &&
                                grid[nx][ny] == 1 && labels[nx][ny] == 0) {
                                labels[nx][ny] = label;
                                stack.push_back({nx, ny});
                            }
                        }
                    }

                    islandSizes[label] = size;
                    maxSize = max(maxSize, size);
                    label++;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) {
                    unordered_set<int> neighborLabels;
                    int total = 1;

                    for (auto [dx, dy] : dirs) {
                        int nx = i + dx, ny = j + dy;
                        if (nx >= 0 && nx < n && ny >= 0 && ny < n &&
                            grid[nx][ny] == 1) {
                            neighborLabels.insert(labels[nx][ny]);
                        }
                    }

                    for (int lbl : neighborLabels) {
                        total += islandSizes[lbl];
                    }

                    maxSize = max(maxSize, total);
                }
            }
        }

        return maxSize;
    }
};
