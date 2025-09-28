class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        int n = arr.size();
        deque<int> minDq, maxDq;  // store indices
        int l = 0, bestLen = 0, bestStart = 0;

        for (int r = 0; r < n; r++) {
            // Maintain min deque (increasing order)
            while (!minDq.empty() && arr[minDq.back()] >= arr[r])
                minDq.pop_back();
            minDq.push_back(r);

            // Maintain max deque (decreasing order)
            while (!maxDq.empty() && arr[maxDq.back()] <= arr[r])
                maxDq.pop_back();
            maxDq.push_back(r);

            // If window invalid, shrink from left
            while (arr[maxDq.front()] - arr[minDq.front()] > x) {
                if (minDq.front() == l) minDq.pop_front();
                if (maxDq.front() == l) maxDq.pop_front();
                l++;
            }

            // Update best window
            if (r - l + 1 > bestLen) {
                bestLen = r - l + 1;
                bestStart = l;
            }
        }

        return vector<int>(arr.begin() + bestStart, arr.begin() + bestStart + bestLen);
    }
};
