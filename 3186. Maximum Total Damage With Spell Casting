class Solution {
public:
    long long dp[100005];
    long long solve(vector<pair<int,int>>&nums,int idx){
        if(idx>=nums.size()) return 0;

        if(dp[idx]!=-1) return dp[idx];

        long long take = 0,skip = 0;

        int j = idx+1;
        while(j<nums.size()){
            if(nums[j].first!=nums[idx].first+1 && nums[j].first!=nums[idx].first+2) break;
            j++;
        }
        take = 1LL*nums[idx].first*nums[idx].second + solve(nums,j);
        skip = solve(nums,idx+1);

        return dp[idx] = max(take,skip);
    }
    long long maximumTotalDamage(vector<int>& power) {
        
        int n = power.size();
        map<int,int>mp;
        for(auto &it:power) mp[it]++;
        
        vector<pair<int,int>>nums;
        for(auto &it:mp){
          nums.push_back({it.first,it.second});
        }

        sort(nums.begin(),nums.end());
        
        memset(dp,-1,sizeof(dp));
        
        return solve(nums,0);
    }
};
