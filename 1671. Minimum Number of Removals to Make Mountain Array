class Solution {
public:
    int lis(int i, vector<int>& nums, vector<int>& dp) {
        if (dp[i] != -1)
            return dp[i];
        int maxi = 1;
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                maxi = max(maxi, lis(j, nums, dp) + 1);
            }
        }
        return dp[i] = maxi;
    }
    int lds(int i, vector<int>& nums, vector<int>& dp) {
        if (dp[i] != -1)
            return dp[i];
        int maxi = 1;
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] > nums[j]) {
                maxi = max(maxi, lds(j, nums, dp) + 1);
            }
        }
        return dp[i] = maxi;
    }

    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        if (n < 3)
            return 0;
        vector<int> lisOfAllIndices(n, -1);
        vector<int> ldsOfAllIndices(n, -1);

        for (int i = 0; i < n; i++) 
        lis(i, nums, lisOfAllIndices);
        
        for (int i = n - 1; i >= 0; i--) 
        lds(i, nums, ldsOfAllIndices);
        

        int maxi = 0;
        for (int i = 1; i < n - 1; i++) {
            if (lisOfAllIndices[i] > 1 && ldsOfAllIndices[i] > 1) { 
                maxi = max(maxi, lisOfAllIndices[i] + ldsOfAllIndices[i] - 1);
            }
        }
        return n - maxi;
    }
};
