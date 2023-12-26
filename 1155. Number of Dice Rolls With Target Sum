class Solution {
    int dp[31][1001];
    int rec(int n,int k,int target){
        if(n==0) return target==0;
        if(dp[n][target]!=-1) return dp[n][target];
        int ans = 0, mod = 1e9+7;
        for(int i=1;i<=min(k,target);i++){
            ans=(0LL+ans+rec(n-1,k,target-i))%mod;
        }
        return dp[n][target] = ans;
    }
public:
    int numRollsToTarget(int n, int k, int target) {
        memset(dp, -1, sizeof dp);
        return rec(n,k,target);
    }
};
