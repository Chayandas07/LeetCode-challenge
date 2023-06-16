class Solution {
    int mod = 1e9 + 7;
    int combination(int k, int n, int mod) {
        if (k > n - k) k = n - k;
        vector<int> dp(k + 1);
        dp[0] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = min(i, k); j > 0; --j) dp[j] = (dp[j] + dp[j - 1]) % mod;
        }
        return dp[k];
    }
    int dfs(vector<int> &A)  {
        if (A.size() <= 1) return 1;
        int root = A[0];
        vector<int> left, right;
        for (int i = 1; i < A.size(); ++i) {
            if (A[i] < root) left.push_back(A[i]);
            else right.push_back(A[i]);
        }
        return ((long)combination(left.size(), A.size() - 1, mod) * dfs(left)) % mod * dfs(right) % mod;
    }
public:
    int numOfWays(vector<int>& A) {
        return (dfs(A) - 1 + mod) % mod;
    }
};
