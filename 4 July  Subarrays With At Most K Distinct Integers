class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        unordered_map<int,int>mp;
        int n = arr.size(), j = 0, ans = 0;
        for (int i=0; i<n; i++){
            mp[arr[i]]+=1;
            while (j <= i && mp.size() > k){
                mp[arr[j]]-=1;
                if (mp[arr[j]] == 0) mp.erase(arr[j]);
                j++;
            }
            ans += (i - j + 1);
        }
        return ans;
    }
};
