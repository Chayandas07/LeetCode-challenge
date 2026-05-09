class Solution {
public:
    int maxProfit(int x, int y, vector<int> &a, vector<int> &b) {

        int n = a.size();

        vector<int> idx(n);

        for (int i = 0; i < n; i++)
            idx[i] = i;

        // Important tasks first
        sort(idx.begin(), idx.end(), [&](int i, int j) {
            return abs(a[i] - b[i]) > abs(a[j] - b[j]);
        });

        long long ans = 0;

        for (int id : idx) {

            // Prefer A if profit larger
            if ((a[id] >= b[id] && x > 0) || y == 0) {
                ans += a[id];
                x--;
            }
            else {
                ans += b[id];
                y--;
            }
        }

        return ans;
    }
};
