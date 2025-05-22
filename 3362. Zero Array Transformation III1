class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), i = 0, qi = 0, qn = queries.size(), res = 0;
        sort(queries.begin(), queries.end());
        priority_queue<int> maxEnd;
        vector<int> prefix(n + 1, 0);
        while (i < n) {
            prefix[i] += (i > 0 ? prefix[i - 1] : 0);
            nums[i] += prefix[i];
            if (nums[i] == 0) {
                i++;
                continue;
            }
            while (qi < qn && queries[qi][0] <= i) {
                maxEnd.push(queries[qi][1]);
                qi++;
            }
            while (nums[i] > 0 && !maxEnd.empty() && maxEnd.top() >= i) {
                prefix[i]--;
                prefix[maxEnd.top() + 1]++;
                nums[i]--;
                maxEnd.pop();
                res++;
            }
            if (nums[i] > 0)
                return -1;
            i++;
        }
        return qn - res;
    }
};
