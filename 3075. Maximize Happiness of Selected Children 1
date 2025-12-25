class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        long long ans = 0;
        int n = happiness.size() - 1;
        for(int i = 0; i < k; i++) {
            int val = happiness[n - i] - i;
            if(val > 0) ans += val;
            else break;
        }
        return ans;
    }
};
