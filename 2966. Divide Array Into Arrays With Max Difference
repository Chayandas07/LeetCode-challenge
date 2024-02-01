#include <vector>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans(nums.size() / 3, vector<int>(3));

        int index = 0;
        for (int i = 0; i < nums.size(); i += 3) {
            if (nums[i + 2] - nums[i] <= k) {
                ans[index][2] = nums[i + 2];
                ans[index][0] = nums[i];
                ans[index][1] = nums[i + 1];
                index++;
            } else {
                return vector<vector<int>>(0, vector<int>(0));
            }
        }
        return ans;
    }
};
