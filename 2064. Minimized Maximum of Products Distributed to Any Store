class Solution {
public:
    int check(int val, vector<int>& nums, int n) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            cnt += (nums[i] + val - 1) / val;
        }
        return cnt;
    }
    
    int minimizedMaximum(int n, vector<int>& quantities) {
        int h = 1e5;
        int l = 1;
        int ans = -1;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (check(mid, quantities, n) <= n) {
                ans = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};
