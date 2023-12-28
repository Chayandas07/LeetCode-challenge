class Solution {
public:
    int getLengthOfOptimalCompression(string s, int k) {
        int n = s.length(); // Length of the input string
        vector<vector<int>> dp(101, vector<int>(101, 999)); // Dynamic programming array for memoization

        dp[0][0] = 0; // Base case: 0 deletions for an empty string results in 0 compression length

        // Loop through each character of the string
        for (int i = 1; i <= n; i++) {
            // Loop through possible deletion counts (0 to k)
            for (int j = 0; j <= k; j++) {
                int count = 0, del = 0; // Variables to store the count of consecutive characters and deletions

                // Loop backward from the current character to the beginning of the string
                for (int t = i; t >= 1; t--) {
                    if (s[t - 1] == s[i - 1])
                        count++; // Increment count if the characters are the same
                    else
                        del++; // Increment deletion count if the characters are different

                    // Check if the remaining deletions are sufficient for the current substring
                    if (j - del >= 0) {
                        int temp = 0;

                        // Determine the compression factor based on the count of consecutive characters
                        if (count >= 100)
                            temp = 3;
                        else if (count >= 10)
                            temp = 2;
                        else if (count >= 2)
                            temp = 1;

                        // Update the dp array with the minimum compression length
                        dp[i][j] = min(dp[i][j], dp[t - 1][j - del] + 1 + temp);
                    }
                }

                // Consider the case where a deletion is made at the current position
                if (j > 0) {
                    dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
                }
            }
        }

        // Return the minimum compression length for the entire string with at most k deletions
        return dp[n][k];
    }
};
