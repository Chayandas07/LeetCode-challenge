class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int patches = 0;
        int index = 0;
        long long nextSum = 1;

        while (nextSum <= n) {
            if (index < nums.size() && nums[index] <= nextSum) {
                nextSum += nums[index++];
            } else {
                nextSum += nextSum;
                patches++;
            }
        }

        return patches;
    }
};
