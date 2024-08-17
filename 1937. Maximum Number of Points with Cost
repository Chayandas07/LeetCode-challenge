class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        //dynamic programming
        int m = points.size(), n = points[0].size();
        long long currMax;
        vector<long long> maxPoints(n), rightRow(n);
        for(auto row: points){
            currMax = 0;

            //Calculate maximum points from the right
            //We do this as we need to change the value of maxPoints[j]
            for(int j = n-1; j >= 0; j--){
                currMax = max(currMax, maxPoints[j]);
                rightRow[j] = currMax--;
            }

            currMax = 0; //Maximum points from the left
            for(int j = 0; j < n; j++){
                currMax = max(currMax, maxPoints[j]);
                //Consider maximum points possible if we pick 
                //the cell of index j of current row
                maxPoints[j] = max(currMax--, rightRow[j]) + row[j];
            }
        }

        // return maximum possible amount of points
        return *max_element(maxPoints.begin(), maxPoints.end());
    }
};
