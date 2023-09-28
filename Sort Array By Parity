class Solution {
public:
    std::vector<int> sortArrayByParity(std::vector<int>& nums) {
        std::vector<int> result;
        for (int i : nums) {
            if (i % 2 == 0) {
                result.push_back(i);
            }
        }
        for (int j : nums) {
            if (j % 2 != 0) {
                result.push_back(j);
            }
        }
        return result;
    }
};
