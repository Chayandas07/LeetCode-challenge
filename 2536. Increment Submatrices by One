class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> diff(n, vector<int>(n, 0));

        // diff array updates
        for (auto &q : queries) {
            int row1 = q[0];
            int col1 = q[1];
            int row2 = q[2];
            int col2 = q[3];

            for (int i = row1; i <= row2; i++) {
                diff[i][col1] += 1;
                if (col2 + 1 < n) diff[i][col2 + 1] -= 1;
            }
        }

        // prefix sum row-wise
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                diff[i][j] += diff[i][j - 1];
            }
        }

        return diff;
    }
};
