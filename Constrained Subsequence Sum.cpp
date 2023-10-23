class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> f(n, 0), b(n, 0); // Create two vectors forward and backward.
        f[0] = nums[0], b[n - 1] = nums[n - 1];
        for (int i = 1; i < nums.size(); i++)
            f[i] = max(f[i - 1], nums[i]);
        for (int i = nums.size() - 2; i >= 0; i--)
            b[i] = min(b[i + 1], nums[i]);
        int i = 0, j = n - 1;
        while (i < n && f[i] == b[i])
            i++;
        while (j >= 0 && f[j] == b[j])
            j--;
        if (i < j)
            return j - i + 1;
        return 0;
    }
};
