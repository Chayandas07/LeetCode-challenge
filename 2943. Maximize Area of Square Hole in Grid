class Solution {
public:
    static inline int findLen(vector<int>& bars){
        sort(bars.begin(), bars.end());
        const int bz=bars.size();
        int Len=1, maxLen=1;
        for(int i=0; i<bz-1; i++){
            Len=1+(-(bars[i]+1==bars[i+1]) & Len);
            maxLen=max(Len, maxLen);
        }
        return maxLen;
    }
    static int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int Len=1+min(findLen(hBars), findLen(vBars));
        return Len*Len;
    }
};
