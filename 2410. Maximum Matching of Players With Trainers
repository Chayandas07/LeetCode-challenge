class Solution {
public:
    static int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) 
    {
        const int n=p.size(), m=t.size();
        sort(p.begin(), p.end());
        sort(t.begin(), t.end());
        int match=0;
        for (int i=0, j=0; i<n && j<m; i++){
            const int pi=p[i];
            while(j<m && t[j]<pi) j++;
            if (j<m) {
                j++;
                match++;
            }
        } 
        return match;
    }
};
