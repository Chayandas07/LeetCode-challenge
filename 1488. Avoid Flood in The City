class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        set<int> zer; // stores indices of days we can dry (rains[i] == 0)
        int n = rains.size();
        vector<int> ans(n, -1); // result array
        unordered_map<int, int> M; // lake -> last day it was filled

        for (int i = 0; i < n; i++) {
            if (rains[i] == 0) {
                // We can dry some lake later
                zer.insert(i);
                ans[i] = 1; // default, can be updated later
            } else {
                int lake = rains[i];
                // If lake already has water, we need to dry it before raining again
                if (M.find(lake) != M.end()) {
                    int lastRainDay = M[lake];
                    // Find first zero-day after last rain day
                    auto up = zer.upper_bound(lastRainDay);
                    if (up == zer.end()) {
                        // No zero-day available to dry => flood
                        return {};
                    }
                    // Use that day to dry the lake
                    ans[*up] = lake;
                    zer.erase(up);
                }
                // Update the last rain day for this lake
                M[lake] = i;
            }
        }
        return ans;
    }
};
