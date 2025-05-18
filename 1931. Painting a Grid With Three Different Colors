class Solution {
public:
    int md = 1e9+7;
    bool isValid(int mask,int m){
        int prev = -1;
        for(int i=0;i<m;i++){
            int cur = mask%3;
            mask/=3;
            if(prev==cur) return false;
            prev = cur;
        }
        return true;
    }
    bool isCompatible(int a,int b,int m){
        for(int i=0;i<m;i++){
            if(a%3==b%3) return false;
            a/=3;b/=3;
        }
        return true;
    }
    int colorTheGrid(int m, int n) {
        int limit = pow(3,m);
        vector<int> validMasks;
        for(int i=0;i<limit;i++){
            if(isValid(i,m)){
                validMasks.push_back(i);
            }
        }
        map<int,vector<int>> adj;
        for(auto a : validMasks){
            for(auto b : validMasks){
                if(isCompatible(a,b,m)){
                    adj[a].push_back(b);
                }
            }
        }
        map<int,int> dp;
        for(auto mask : validMasks){
            dp[mask] = 1;
        }

        for(int i=1;i<n;i++){
            map<int,int> updatedDP;
            for(auto &[mask,count] : dp){
                for(auto nei : adj[mask]){
                    updatedDP[nei] = (updatedDP[nei] + count)%md; 
                }
            }
            dp = updatedDP;
        }

        int ans = 0;
        for(auto &[x,val] : dp) ans = (ans + val)%md;

        return ans; 

    }

};
