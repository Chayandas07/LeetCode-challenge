class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size(), m = mat[0].size();
        int i = 0, j = m*n - 1;
        while(i<=j){
            int mid = (i + j)/2;
            int r = mid/m;
            int c = mid%m;
            if(mat[r][c]==target)return true;
            if(mat[r][c]>target){
                j = mid - 1;
            }
            else i = mid + 1;
        }
        return false;
    }
};
