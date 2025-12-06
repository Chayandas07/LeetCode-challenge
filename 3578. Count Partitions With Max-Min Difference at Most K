class Solution {
public:
    int countPartitions(vector<int>& nums, int k) {
        int n = nums.size();
        const int MOD = 1'000'000'007;

        vector<long long> dp(n+1,0);
        dp[0] = 1;

        deque<int> mx, mn;
        int l = 0;
        long long sum = 0;

        for(int r=0; r<n; r++){
            while(!mx.empty() && nums[mx.back()] <= nums[r]) mx.pop_back();
            while(!mn.empty() && nums[mn.back()] >= nums[r]) mn.pop_back();
            mx.push_back(r);
            mn.push_back(r);

            while(nums[mx.front()] - nums[mn.front()] > k){
                if(mx.front() == l) mx.pop_front();
                if(mn.front() == l) mn.pop_front();
                sum = (sum - dp[l] + MOD) % MOD;
                l++;
            }

            sum = (sum + dp[r]) % MOD;
            dp[r+1] = sum;
        }
        return dp[n];
    }
};
