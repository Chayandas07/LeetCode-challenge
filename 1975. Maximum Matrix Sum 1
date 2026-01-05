class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int minAbs=INT_MAX, cntNeg=0;
        for(auto& row: matrix){
            for(int x: row){
                minAbs=min(minAbs, abs(x));
                if (x<0){
                    sum-=x;
                    cntNeg++;
                }
                else{
                    sum+=x;
                }
            }
        }
        return (cntNeg&1)?sum-2*minAbs:sum;
    }
};
