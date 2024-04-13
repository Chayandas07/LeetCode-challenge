class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxArea = 0;
        
        if(matrix.size() == 0 || matrix[0].size() == 0) return 0;
        int cols = matrix[0].size();
        int rows = matrix.size();
        vector<int>histogram(cols+1, 0);
        histogram[cols] = -1;
        stack<pair<int,int>>monotonic;
        
        for(auto row: matrix) {
            for(int i = 0; i < cols; i++) {
                if(row[i] == '1') {
                    histogram[i]++;
                } else {
                    histogram[i] = 0;
                } 
            }
            
            for(int i = 0; i < cols+1; i++) {
                int x = 0;
                while(!monotonic.empty() && monotonic.top().first >= histogram[i]) {
                    auto tp = monotonic.top();  monotonic.pop();
                    int h = tp.first, steps = tp.second;
                    x += steps;
                    maxArea = max(maxArea, h*x);
                }
                monotonic.push({histogram[i], x+1});
            }
        }
        
        return maxArea;
    }
};
