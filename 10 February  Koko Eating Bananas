class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        sort(arr.begin(), arr.end());
        int low = 1, high = arr[arr.size()-1], ans = 0;
        while (low <= high) {
            int helper = 0, mid = low + (high-low)/2;
            for (auto i : arr) {
                helper += ((i%mid) == 0) ? (i/mid) : (i/mid)+1;
            }
            if (helper <= k) {
                ans = mid;
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        return ans;
    }
};

