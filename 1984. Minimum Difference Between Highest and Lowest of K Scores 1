class Solution {
public:
    using ll=long long;
    static int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        if ((ll)nums[0]*k>=nums.back()) return 0;
        const int n=nums.size();
        int ans=n;
        for(int l=0, r=0; r<n; r++){
            const int x=nums[r];
            while(l<r && (ll)nums[l]*k<x) l++;
            ans=min(ans, n-(r-l+1));
        }
        return ans;
    }
};
