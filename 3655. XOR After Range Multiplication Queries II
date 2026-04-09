class Solution {
    public int xorAfterQueries(int[] nums, int[][] queries) {
        int MOD = (int)1e9+7, n = nums.length, m = queries.length;
        int B = (int)Math.sqrt(n);
        ArrayList<int[]>[][] store = new ArrayList[B+1][B+1];

        for (int i = 0; i < B; i++) {
            for (int j = 0; j < B; j++) {
                store[i][j] = new ArrayList<>();
            }
        }

        for (int i = 0; i < m; i++) {
            int l = queries[i][0], r = queries[i][1];
            int k = queries[i][2], v = queries[i][3];

            if (k >= B) {
                for (int idx = l; idx <= r; idx += k) {
                    nums[idx] = (int)((1L * nums[idx] * v) % MOD);
                }
            } else {
                int remainder = l % k;
                store[k][remainder].add(new int[]{l, r, v});
            }
        }

        for (int k = 1; k < B; k++) {
            for (int rem = 0; rem < k; rem++) {
                if (store[k][rem].isEmpty()) continue;

                ArrayList<int[]> queriesList = store[k][rem];

                int chainLength = (n - rem + k - 1) / k;

                long[] diff = new long[chainLength + 1];
                Arrays.fill(diff, 1L);

                for (int[] q : queriesList) {
                    int l = q[0], r = q[1], v = q[2];

                    int startPos = (l - rem) / k;
                    int endPos = (r - rem) / k;
                    
                    if (startPos < 0) startPos = 0;
                    if (endPos >= chainLength) endPos = chainLength - 1;
                    if (startPos > endPos) continue;

                    diff[startPos] = (diff[startPos] * v) % MOD;
                    if (endPos + 1 < chainLength) {
                        diff[endPos + 1] = (diff[endPos + 1] * modInverse(v, MOD)) % MOD;
                    }
                }

                long curr = 1L;
                for (int pos = 0; pos < chainLength; pos++) {
                    curr = (curr * diff[pos]) % MOD;
                    int idx = rem + pos * k;
                    nums[idx] = (int)((1L * nums[idx] * curr) % MOD);
                }
            }
        }

        int res = 0;
        for (int i = 0; i < n; i++) {
            res ^= nums[i];
        }

        return res;
    }

    private long modInverse(long a, int MOD) {
        return pow(a, MOD - 2, MOD);
    }

    private long pow(long a, long b, int MOD) {
        long result = 1;
        while (b > 0) {
            if ((b & 1) == 1) {
                result = (result * a) % MOD;
            }
            a = (a * a) % MOD;
            b >>= 1;
        }
        return result;
    }
}
