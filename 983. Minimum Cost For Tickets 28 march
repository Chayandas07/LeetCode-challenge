class Solution {
public:
    int  helper(int idx,vector<int>&days,vector<int>&costs,vector<int>&dp){
        if(idx>=days.size()){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        int pass1=upper_bound(days.begin(),days.end(),days[idx]+1-1)-days.begin();
        int c1=helper(pass1,days,costs,dp)+costs[0];
        int pass7=upper_bound(days.begin(),days.end(),days[idx]+7-1)-days.begin();
        int c7=helper(pass7,days,costs,dp)+costs[1];
        int pass3=upper_bound(days.begin(),days.end(),days[idx]+30-1)-days.begin();
        int c3=helper(pass3,days,costs,dp)+costs[2];
        
        return dp[idx]=min(min(c1,c7),c3);
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(days.size()+1,-1);
        return helper(0,days,costs,dp);
      
    }
};
