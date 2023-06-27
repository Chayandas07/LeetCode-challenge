class Solution {
public:
vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
vector<vector<int>> ans;
priority_queue<pair<int, pair<int, int>>> pq; // max-heap to store the k smallest pairs
    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            int sum = nums1[i] + nums2[j];

            // If the priority queue size is less than k, add the pair
            if (pq.size() < k)
                pq.push({sum, {nums1[i], nums2[j]}});
            else if (sum < pq.top().first) {
                // If the current sum is smaller than the largest sum in the priority queue,
                // remove the largest sum and add the current sum
                pq.pop();
                pq.push({sum, {nums1[i], nums2[j]}});
            } else if (sum > pq.top().first) {
                // If the current sum is larger than the largest sum in the priority queue,
                // break the inner loop since sums will only increase from this point onwards
                break;
            }
        }
    }

    // Retrieve the k smallest pairs from the priority queue and store them in the answer vector
    while (!pq.empty()) {
        ans.push_back({pq.top().second.first, pq.top().second.second});
        pq.pop();
    }

    return ans;
}
};
