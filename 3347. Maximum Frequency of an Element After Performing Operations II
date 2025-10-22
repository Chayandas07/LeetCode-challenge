class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        
        int ans = 1;
        int adjustable = 0;

        // Containers for line sweep Algo
        unordered_map<int, int> frequency;
        set<int> candidates;
        map<int, int> critical_points;

        for(int num: nums) {
            frequency[num]++;
            critical_points[num - k]++;
            critical_points[num + k + 1]--;
            candidates.insert(num);
            candidates.insert(num - k);
            candidates.insert(num + k + 1);
        }

        for(int num: candidates) {
            adjustable += critical_points.contains(num) ? critical_points[num] : 0;
            int frequencyOfNum = frequency.contains(num) ? frequency[num] : 0;
            int adjusted = adjustable - frequencyOfNum;
            ans = max(ans, frequencyOfNum + min(adjusted, numOperations));
        }

        return ans;
    }
};
