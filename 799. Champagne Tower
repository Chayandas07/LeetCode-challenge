class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        std::vector<std::vector<double>> tower(query_row + 1, std::vector<double>(query_row + 1, 0.0));
        tower[0][0] = static_cast<double>(poured);

        for (int row = 0; row < query_row; row++) {
            for (int glass = 0; glass <= row; glass++) {
                double excess = (tower[row][glass] - 1.0) / 2.0;
                if (excess > 0) {
                    tower[row + 1][glass] += excess;
                    tower[row + 1][glass + 1] += excess;
                }
            }
        }

        return std::min(1.0, tower[query_row][query_glass]);
    }
};
