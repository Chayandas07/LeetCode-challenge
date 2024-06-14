class Solution {
public:
    int minIncrementForUnique(std::vector<int>& nums) {
        if (nums.empty()) return 0;
        int moves = 0,maxVal = 0;
        for(auto c:nums)maxVal=max(maxVal,c);
        int maxLength = nums.size() + maxVal;
        vector<int> count(maxLength, 0);
        for (int c : nums) count[c]++;
        for (int i = 0; i < maxLength; ++i) {
            if (count[i] > 1) {
                int tmp = count[i] - 1;
                count[i + 1] += tmp;
                moves += tmp;
            }
        }
        return moves;
    }
};
