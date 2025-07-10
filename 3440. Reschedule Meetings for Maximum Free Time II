class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& startTime,
                    vector<int>& endTime) {
        vector<int> gap(1, startTime[0]);
        for (int i = 1; i < startTime.size(); ++i)
            gap.push_back(startTime[i] - endTime[i - 1]);
        gap.push_back(eventTime - endTime.back());

        vector<int> largestRight(gap.size(), 0);
        for (int i = gap.size() - 2; i >= 0; --i)
            largestRight[i] = max(largestRight[i + 1], gap[i + 1]);

        int ans = 0, largestLeft = 0;
        for (int i = 1; i < gap.size(); ++i) {
            int curGap = endTime[i - 1] - startTime[i - 1];
            if (curGap <= max(largestLeft, largestRight[i]))
                ans = max(ans, gap[i - 1] + gap[i] + curGap);
            ans = max(ans, gap[i - 1] + gap[i]);
            largestLeft = max(largestLeft, gap[i - 1]);
        }
        return ans;
    }
};
