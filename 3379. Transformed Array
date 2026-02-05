class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        for(int i = 0; i < n; i++) {
            int targetidx = ((i + nums[i]) % n + n) % n;
            result[i] = nums[targetidx];
        }
        return result;
    }
};
