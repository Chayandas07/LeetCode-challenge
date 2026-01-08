class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        
        if (m > n) {
            return maxDotProduct(nums2, nums1);
        }
        
        vector<int> dp(m + 1, -1e9);
        
        for (int i = 1; i <= n; ++i) {
            int prev_diag = -1e9;
            
            for (int j = 1; j <= m; ++j) {
                int curr_product = nums1[i-1] * nums2[j-1];
                int temp = dp[j];
                
                dp[j] = max({
                    curr_product,
                    curr_product + prev_diag,
                    dp[j],
                    dp[j-1]
                });
                
                prev_diag = temp;
            }
        }
        
        return dp[m];
    }
};
