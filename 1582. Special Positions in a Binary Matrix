class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        const int m = mat.size();
        const int n = mat[0].size();
        vector<int>row(m);
        vector<int>col(n);
        int specialPos = 0;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(mat[i][j]==1){++row[i];++col[j];}
            }
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(mat[i][j]==1 && row[i]==1 && col[j]==1){++specialPos;}
            }
        }
        return specialPos;
    }
};
