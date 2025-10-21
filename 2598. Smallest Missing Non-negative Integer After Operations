class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        // Store the frequency of element%value (non-negative remainder)
        vector<int> freq(value, 0);
        
        for (int num : nums) {
            // Convert negative remainders to positive
            int mod = ((num % value) + value) % value;
            freq[mod]++;
        }

        int mex = 0;
        while (true) {
            int mod = mex % value;
            if (freq[mod] > 0) {
                freq[mod]--;
                mex++;
            } else {
                break;
            }
        }
        return mex;
    }
};
