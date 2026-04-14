import java.util.*;

class Solution {
    long[][] dp;

    public long minimumTotalDistance(List<Integer> robot, int[][] factory) {
        Collections.sort(robot);
        Arrays.sort(factory, (a, b) -> a[0] - b[0]);

        int n = robot.size();
        int m = factory.length;

        dp = new long[n][m];
        for (long[] row : dp) Arrays.fill(row, -1);

        return solve(0, 0, robot, factory);
    }

    private long solve(int i, int j, List<Integer> robot, int[][] factory) {
        int n = robot.size();
        int m = factory.length;

        // all robots assigned
        if (i == n) return 0;

        // no factory left
        if (j == m) return (long)1e15;

        if (dp[i][j] != -1) return dp[i][j];

        long res = solve(i, j + 1, robot, factory); // skip factory

        long cost = 0;
        int pos = factory[j][0];
        int limit = factory[j][1];

        // assign k robots to this factory
        for (int k = 0; k < limit && i + k < n; k++) {
            cost += Math.abs(robot.get(i + k) - pos);
            res = Math.min(res, cost + solve(i + k + 1, j + 1, robot, factory));
        }

        return dp[i][j] = res;
    }
}
