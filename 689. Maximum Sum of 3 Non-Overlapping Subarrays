class Solution {
public:
    void subarraySum(vector<int>& nums, vector<int>& subarr, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int sum = 0;

        while (r < n) {
            while (r - l + 1 < k) {
                sum += nums[r];
                r++;
            }
            sum += nums[r];
            subarr.push_back(sum);
            sum -= nums[l];
            l++;
            r++;
        }
    };

    int helper(int ind, vector<int>& subarr, int k, int count,
               vector<vector<int>>& dp) {
        int n = subarr.size();
        if (count == 0)
            return 0;
        if (ind >= n)
            return INT_MIN;
        if (dp[ind][count] != -1)
            return dp[ind][count];
        int take = subarr[ind] + helper(ind + k, subarr, k, count - 1, dp);
        int nottake = helper(ind + 1, subarr, k, count, dp);
        return dp[ind][count] = max(take, nottake);
    }
    void solve(int ind, int count, vector<int>& ans, vector<int>& subarr, int k,
               vector<vector<int>>& dp) {
        int n = subarr.size();
        if (count == 0)
            return;
        if (ind >= n)
            return;

        int take = subarr[ind] + helper(ind + k, subarr, k, count - 1, dp);
        int nottake = helper(ind + 1, subarr, k, count, dp);

        if (take >= nottake) {
            ans.push_back(ind);
            solve(ind + k, count - 1, ans, subarr, k, dp);
        } else
            solve(ind + 1, count, ans, subarr, k, dp);
    }

    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> subarr;
        subarraySum(nums, subarr, k);
        vector<vector<int>> dp(n + 1, vector<int>(4, -1));
        vector<int> ans;
        solve(0, 3, ans, subarr, k, dp);
        return ans;
    }
};
