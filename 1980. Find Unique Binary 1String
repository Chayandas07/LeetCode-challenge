class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        for (int i = 0; i < nums.size(); i++)
            nums[0][i] = nums[i][i] == '1' ? '0' : '1';
        return nums[0];
    }
};
