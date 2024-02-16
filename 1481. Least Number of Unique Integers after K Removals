
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for (auto i : arr) {
            mp[i]++;
        }
        int n = mp.size();
        vector<pair<int, int>> temp(n);
        int j = 0;
        for (auto i : mp) {
            temp[j].first = i.second;
            temp[j].second = i.first;
            j++;
        }

        sort(temp.begin(), temp.end());

        j = 0;
        int ans = temp.size();
        while (k > 0) {
            while (temp[j].first > 0 && k > 0) {
                temp[j].first--;
                k--;
            }
            if (temp[j].first == 0) {
                j++;
                ans--;
            }
        }
        return ans;
    }
};
