class Solution {
public:
    bool isScramble(string s1, string s2) {
        int n = (int) s1.size();
        bool vis[n][n][n][n];
        bool dp[n][n][n][n];
        memset(vis, false, sizeof(vis));
        memset(dp, false, sizeof(dp));

        // we are always calling the function such that, the substring we are checking on both the
        // substrings are of same length, i.e. (r1 - l1 + 1 == r2 - l2 + 1)

        // helper takes in two substrings of both string
        // and returns whether they are scamble of each other
        function<bool(int, int, int, int)> helper = [&] (int l1, int r1, int l2, int r2) {
            if (vis[l1][r1][l2][r2]) return dp[l1][r1][l2][r2];
            vis[l1][r1][l2][r2] = true;

            bool isSame = true;
            for (int i = l1, j = l2; i <= r1 && j <= r2; i++, j++)
                if (s1[i] != s2[j]) isSame = false;
            
            // is already same, simply return true
            if (isSame) {
                dp[l1][r1][l2][r2] = true;
                return true;
            }

            bool res = false;
            for (int i = l1; i < r1; i++) {
                // opt1: prefix1 matches to prefix2 and suffix1 matches to suffix2
                res |= (helper(l1, i, l2, l2 + (i - l1)) && helper(i + 1, r1, l2 + (i - l1) + 1, r2));

                // opt2: prefix1 matches to suffix2 and prefix2 matches to suffix1
                res |= (helper(l1, i, r2 - (i - l1), r2) && helper(i + 1, r1, l2, r2 - (i - l1) - 1));
            }

            dp[l1][r1][l2][r2] = res;
            return res;
        };

        return helper(0, n - 1, 0, n - 1);
    }
};
