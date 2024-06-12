class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 0, w = 0, b = nums.size() - 1;
        while (w <= b){
            if (!nums[w])
                swap(nums[r++], nums[w++]);
            else if (nums[w] == 1)
                w++;
            else
                swap(nums[w], nums[b--]);
        }
    }
};
