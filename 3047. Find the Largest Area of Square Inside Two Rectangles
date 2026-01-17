class Solution {
public:
    static long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        const int n=bottomLeft.size();
        long long maxSide=0;
        for(int i=0; i<n-1; i++){
            const int a=bottomLeft[i][0], b=bottomLeft[i][1], c=topRight[i][0], d=topRight[i][1];
            for(int j=i+1; j<n; j++){
                const int aj=bottomLeft[j][0], bj=bottomLeft[j][1], cj=topRight[j][0], dj=topRight[j][1];
                const long long width=min(cj, c)-max(aj, a);
                const long long height=min(dj, d)-max(bj, b);
                const long long s=min(width, height);
                if (s>maxSide) maxSide=s;
            }
        }
        return maxSide*maxSide;
    }
};
