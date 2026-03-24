class Solution {
public:
   typedef long long ll;
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(), mod=12345;;
        vector<vector<int>>ans(n,vector<int>(m));
        ll pref=1,suff=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=pref;
                pref=(pref*grid[i][j])%mod;
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                ans[i][j]=(ans[i][j]*suff)%mod;
                suff=(suff*grid[i][j])%mod;
            }
        }
        return ans;
    }
};
