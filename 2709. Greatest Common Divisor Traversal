class Solution {
public:
    int get(vector<int> &parent, int a) {
        return parent[a] = parent[a] == a ? a : get(parent, parent[a]);
    }
    void Union(vector<int> &parent, vector<int> &rank, int a, int b) {
        a = get(parent, a);
        b = get(parent, b);
        if(a == b) return;
        if(rank[a] < rank[b]) swap(a, b);
        parent[b] = a;
        rank[a] += rank[b];
    }
    vector<int> factorsCalculator(int n) {
        vector<int> dp(n + 2);
        iota(dp.begin(), dp.end(), 0);
        for(int i = 2; i <= n; ++i) {
            if(dp[i] == i) {
                for(int j = i * 2; j <= n; j += i) {
                    if(dp[j] == j) dp[j] = i;
                }
            }
        }
        return dp;
    }
    bool canTraverseAllPairs(vector<int>& nums) {
        if(nums.size() == 1) return true;
        int n = nums.size();
        int maxElement = *max_element(nums.begin(), nums.end());
        if(*min_element(nums.begin(), nums.end()) == 1) return false;
        vector<int> factorArray = factorsCalculator(maxElement);

        vector<int> parent(maxElement + 1);
        iota(parent.begin(), parent.end(), 0);
        ;
        vector<int> rank(maxElement + 1, 1);
        for(int i = 0; i < n; ++i) {
            int x = nums[i];
            while(x > 1) {
                int p = factorArray[x];
                Union(parent, rank, p, nums[i]);
                while(x % p == 0) {
                    x = x / p;
                }
            }
        }

        int p = get(parent, nums[0]);
        for(int i = 1; i < n; ++i) {
            if(get(parent, nums[i]) != p) return false;
        }

        return true;
    }
};
