class Solution {
private:
    // Helper function to check if column j can precede column i for all strings
    bool isSorted(const vector<string>& strs, int j, int i) {
        for (const string& s : strs) {
            // If any string violates the non-decreasing order, return false
            if (s[j] > s[i])
                return false;
        }
        return true;
    }

public:
    int minDeletionSize(vector<string>& strs) {
        int m = strs[0].size();
        // dp[i] stores the max length of an increasing subsequence ending at index i
        vector<int> dp(m, 1);

        for (int i = 1; i < m; ++i) {
            for (int j = 0; j < i; ++j) {
                // If column j can precede column i, try to extend the sequence
                if (isSorted(strs, j, i)) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        // The longest sequence we can keep
        int longest = *max_element(dp.begin(), dp.end());
        
        // Result is total columns minus the ones we keep
        return m - longest;
    }
};
