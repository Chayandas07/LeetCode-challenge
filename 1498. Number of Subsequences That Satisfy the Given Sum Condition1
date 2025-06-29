class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int mod = 1e9 + 7;
        long long ans = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size() - 1;
        
        // Precompute powers of 2 modulo mod
        vector<int> powers(nums.size(), 1);
        for (int i = 1; i < nums.size(); ++i) {
            powers[i] = (powers[i - 1] * 2) % mod;
        }

        for (int i = 0; i <= n; i++) {
            int start = i, end = n, possible = -1;
            while (start <= end) {
                int mid = start + (end - start) / 2;
                if (nums[i] + nums[mid] <= target) {
                    possible = mid;
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }

            if (possible == -1) continue;
            ans = (ans + powers[possible - i]) % mod;
        }

        return ans;
    }
};
