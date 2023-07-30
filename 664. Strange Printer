class Solution {
public:
    int solveDp(int i,int j,string &s,vector<vector<int>>&dp){

        //base case
        if(i==j) return 1;

        if(dp[i][j]!=-1) return dp[i][j];

        int miniCuts=1e9;

        for(int k=i;k<j;k++){
            miniCuts=min(miniCuts,(solveDp(i,k,s,dp)+solveDp(k+1,j,s,dp)));
        }

        return dp[i][j]= s[i]==s[j]?miniCuts-1:miniCuts;
    }
    int strangePrinter(string s) {
        
        int n=s.length();

        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));

        return solveDp(0,n-1,s,dp);
         

    }
};
