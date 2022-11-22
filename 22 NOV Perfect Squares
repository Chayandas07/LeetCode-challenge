class Solution {
public:
    int numSquares(int n) {
        vector<int> squares;
        int p = 1, curr = 1;
        
        while (curr <= n) {
            curr = pow(p++, 2);
            squares.push_back(curr);
        }
        
        vector<int> dp(n+1, n+1);
        dp[0] = 0;
        
        for (int i = 1; i <= n; i++)
            for (auto s : squares)
                if (s <= i) dp[i] = min(dp[i], dp[i-s]+1);

        return dp[n];
    }
};
