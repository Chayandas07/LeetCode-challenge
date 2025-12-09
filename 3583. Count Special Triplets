class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int n = 100001, mod = 1000000007;
        long ans = 0;
        int hash[n], prev[n];
        for(int i = 0; i < n; i++) hash[i] = prev[i] = 0;
        for(int i = 0; i < nums.size(); i++) hash[nums[i]]++;
        for(int i = 1; i < nums.size() - 1; i++) {
            prev[nums[i - 1]]++;
            int j = nums[i], k = 2*j;
            if(k < n) {
                ans += (long)prev[k] * (hash[k] - prev[k] - (j == 0));
            }
        }
        return ans % mod;
    }
};
