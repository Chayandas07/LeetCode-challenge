#include<bits/stdc++.h>
class Solution {
public:
int solve(vector<int>& arr, int k, vector<int> &dp,int i )
{
    int n = arr.size();
    if(i == arr.size())return 0;
    if(dp[i]!=-1)return dp[i];
    int ans = INT_MIN;
    int maxans = INT_MIN;
    int len = 0;

    for( int j = i;j<min(i+k,n);j++)
    {
        len++;
        ans = max(ans,arr[j]);
        int sum = len * ans + solve(arr,k,dp,j+1);  
        maxans = max(maxans,sum);
    }
    return dp[i] = maxans;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
       vector<int>dp(arr.size()+1,-1);
       return solve(arr,k,dp,0) ;
    }
};
