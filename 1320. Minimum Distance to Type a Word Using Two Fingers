class Solution {
    public int minimumDistance(String word) {
        int n = word.length();

        // Precompute positions
        int[][] pos = new int[26][2];
        for(int i = 0; i < 26; i++){
            pos[i][0] = i / 6;
            pos[i][1] = i % 6;
        }

        int total = 0;
        int[] dp = new int[26]; // max savings

        for(int i = 1; i < n; i++){
            int prev = word.charAt(i - 1) - 'A';
            int curr = word.charAt(i) - 'A';

            int d = dist(pos, prev, curr);
            total += d;

            int[] next = new int[26];

            for(int c = 0; c < 26; c++){
                // case 1: don't use second finger
                next[c] = Math.max(next[c], dp[c]);

                // case 2: use second finger
                int saving = d - dist(pos, c, curr);
                next[prev] = Math.max(next[prev], dp[c] + saving);
            }

            dp = next;
        }

        int maxSave = 0;
        for(int val : dp) maxSave = Math.max(maxSave, val);

        return total - maxSave;
    }

    private int dist(int[][] pos, int a, int b){
        return Math.abs(pos[a][0] - pos[b][0]) +
               Math.abs(pos[a][1] - pos[b][1]);
    }
}
