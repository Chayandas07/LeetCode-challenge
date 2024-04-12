class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size(); // Number of elements in the input vector
        int water = 0;     // Variable to store the total trapped water

        // Arrays to store maximum height to the left and right of each index
        vector<int> l_max(n), r_max(n);

        // Calculate the maximum height to the left of each index
        l_max[0] = height[0]; // First element's maximum height to the left is itself
        for (int i = 1; i < n; i++)
            l_max[i] = max(height[i], l_max[i - 1]);

        // Calculate the maximum height to the right of each index
        r_max[n - 1] = height[n - 1]; // Last element's maximum height to the right is itself
        for (int i = n - 2; i >= 0; i--)
            r_max[i] = max(height[i], r_max[i + 1]);

        // Iterate through each index (excluding the first and last)
        for (int i = 1; i < n - 1; i++)
        {
            // Calculate the maximum water current height can hold above itself
            water += min(r_max[i], l_max[i]) - height[i];
        }
        return water; // Return the total trapped water
    }
};
