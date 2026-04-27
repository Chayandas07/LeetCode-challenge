class Solution {
    private static final int[][] TRANS = {
        {-1, 1, -1, 3},
        {0, -1, 2, -1},
        {3, 2, -1, -1},
        {1, -1, -1, 2},
        {-1, 0, 3, -1},
        {-1, -1, 1, 0}
    };

    private static final int[][] DIRS = {
        {-1, 0}, // Up
        {0, 1},  // Right
        {1, 0},  // Down
        {0, -1}  // Left
    };

    private static final int[][] START = {
        {1, 3}, {0, 2}, {2, 3},
        {1, 2}, {0, 3}, {0, 1}
    };

    public boolean hasValidPath(int[][] grid) {
        int m = grid.length, n = grid[0].length;

        if (grid[0][0] == 5) return false;
        if (grid[m - 1][n - 1] == 4) return false;
        if (m == 1 && n == 1) return true;

        int[] startDirs = START[grid[0][0] - 1];
        return simulate(grid, startDirs[0]) || simulate(grid, startDirs[1]);
    }

    private boolean simulate(int[][] grid, int dir) {
        if (dir == -1) return false;

        int m = grid.length, n = grid[0].length;
        int r = DIRS[dir][0], c = DIRS[dir][1];
        boolean[] visited = new boolean[m * n];

        while (r >= 0 && r < m && c >= 0 && c < n) {
            int idx = r * n + c;

            if (visited[idx]) return false;
            visited[idx] = true;

            dir = TRANS[grid[r][c] - 1][dir];
            if (dir == -1) return false;

            if (r == m - 1 && c == n - 1) return true;

            r += DIRS[dir][0];
            c += DIRS[dir][1];
        }
        return false;
    }
}
