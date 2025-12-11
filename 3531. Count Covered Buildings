class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, set<int>> rowToCol, colToRow;
        for (auto &b : buildings) {
            int x = b[0], y = b[1];
            rowToCol[x].insert(y);
            colToRow[y].insert(x);
        }

        int cnt = 0;
        for (auto &b : buildings) {
            int x = b[0], y = b[1];
            auto &cols = rowToCol[x];
            auto it = cols.lower_bound(y);
            bool hasLeft = (it != cols.begin());
            bool hasRight = false;
            if (it != cols.end()) {
                auto it2 = it; ++it2;
                hasRight = (it2 != cols.end());
            }

            auto &rows = colToRow[y];
            auto it3 = rows.lower_bound(x);
            bool hasUp = (it3 != rows.begin());
            bool hasDown = false;
            if (it3 != rows.end()) {
                auto it4 = it3; ++it4;
                hasDown = (it4 != rows.end());
            }

            if (hasLeft && hasRight && hasUp && hasDown) cnt++;
        }
        return cnt;
    }
};
