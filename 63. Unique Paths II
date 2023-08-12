class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int n = v.size(),m =v[0].size();
        if(v[0][0] || v[n-1][m-1])return 0;
        vector<vector<int>>dp(n,vector<int>(m,0));
        dp[0][0]=1;
        for(int i=1;i<n;i++){
            if(v[i][0])dp[i][0]=0;
            else dp[i][0]=dp[i-1][0];
        }
        for(int i=1;i<m;i++){
            if(v[0][i])dp[0][i]=0;
            else dp[0][i]=dp[0][i-1];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(!v[i][j])dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[n-1][m-1];
    }
};
