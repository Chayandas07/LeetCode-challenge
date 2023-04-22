class Solution {
public:
    int minInsertions(string s1) {
        int n = s1.length();
        vector<int> dp1(n+1,0),dp2(n+1,0);
        string s2 = s1;
        reverse(s1.begin(),s1.end());
        int i,j;
        for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){
                if(s1[i-1]==s2[j-1]){
                    dp2[j] = dp1[j-1]+1;
                }else{
                    dp2[j] = max(dp1[j],dp2[j-1]);
                }
            }
            dp1 =  dp2;
        }
        return n-dp1[n];
    }
};
