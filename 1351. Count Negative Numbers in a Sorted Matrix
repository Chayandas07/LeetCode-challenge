  // Time complexity - O(M*Log(K))
 // space complexity - O(1) 
//  where M rows in the grid.
//  where K is the maximum number of columns in any row.

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

        int n = grid.size();
        int ans = 0;

        for(int i=0;i<n;i++){
            int ub = upper_bound(grid[i].rbegin(),grid[i].rend(),-1) - grid[i].rbegin();

            ans += ub;
        }
        
        return ans;
    }
};
