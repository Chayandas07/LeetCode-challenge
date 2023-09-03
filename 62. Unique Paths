class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 0));
        
        // Initialize the rightmost column and bottom row to 1 because there is only one way to reach each cell in those rows/columns.
        for (int i = 0; i < m; i++) {
            dp[i][n-1] = 1;
        }
        for (int j = 0; j < n; j++) {
            dp[m-1][j] = 1;
        }
        
        // Fill in the dp table bottom-up
        for (int i = m - 2; i >= 0; i--) {
            for (int j = n - 2; j >= 0; j--) {
                dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }
        
        return dp[0][0];
    }
};
