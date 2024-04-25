class Solution {
public:

    int solve(string&s, int k){

        vector<int>tab(26);

        int i, j, maxi = 0;
    
        for(i = s.length()-1; i>-1; i--){
            for(j = 0; j<=25; j++){
                if(abs(s[i]-(j+97))<=k && tab[j]){
                    tab[s[i]-97] = max(tab[s[i]-97], tab[j]);
                }
            }
            tab[s[i]-97]++;
            maxi = max(maxi, tab[s[i]-97]);
        }
        return maxi;
    }

    int longestIdealString(string s, int k) {
        return solve(s, k);
    }
};
