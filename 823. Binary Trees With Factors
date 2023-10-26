class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int mod = static_cast<int>(1e9 + 7);
        std::sort(arr.begin(), arr.end());
        int ans = 0;
        std::unordered_map<int, long> map;

        for (int x : arr) {
            long ways = 1;
            int max = static_cast<int>(std::sqrt(x));

            for (int j = 0, left = arr[0]; left <= max; left = arr[++j]) {
                if (x % left != 0) continue;
                int right = x / left;
                if (map.find(right) != map.end()) {
                    ways = (ways + map[left] * map[right] * (left == right ? 1 : 2)) % mod;
                }
            }
            map[x] = ways;
            ans = (ans + static_cast<int>(ways)) % mod;
        }
        return ans;
    }
};
