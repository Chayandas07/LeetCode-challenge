class Solution {
    public int maximumAmount(int[][] coins) {
        int m = coins.length;
        int n = coins[0].length;

        // dp[i][j][k]
        int[][][] dp = new int[m][n][3];

        // Initialize with very small values
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < 3; k++) {
                    dp[i][j][k] = Integer.MIN_VALUE;
                }
            }
        }

        // Base case for (0,0)
        for (int k = 0; k <= 2; k++) {
            if (coins[0][0] >= 0) {
                dp[0][0][k] = coins[0][0];
            } else {
                dp[0][0][k] = (k > 0) ? 0 : coins[0][0];
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) continue;

                for (int k = 0; k <= 2; k++) {
                    int best_prev = Integer.MIN_VALUE;

                    if (i > 0) best_prev = Math.max(best_prev, dp[i-1][j][k]);
                    if (j > 0) best_prev = Math.max(best_prev, dp[i][j-1][k]);

                    int val = coins[i][j];

                    if (val >= 0) {
                        dp[i][j][k] = best_prev + val;
                    } else {
                        // do not neutralize
                        int no_neutral = best_prev + val;

                        // use neutralization if available
                        int use_neutral = Integer.MIN_VALUE;
                        if (k > 0) {
                            int best_prev2 = Integer.MIN_VALUE;

                            if (i > 0) best_prev2 = Math.max(best_prev2, dp[i-1][j][k-1]);
                            if (j > 0) best_prev2 = Math.max(best_prev2, dp[i][j-1][k-1]);

                            use_neutral = best_prev2;
                        }

                        dp[i][j][k] = Math.max(no_neutral, use_neutral);
                    }
                }
            }
        }

        return Math.max(dp[m-1][n-1][0],
               Math.max(dp[m-1][n-1][1], dp[m-1][n-1][2]));
    }
}
