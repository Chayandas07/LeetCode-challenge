class Solution {
public:
    static bool areSimilar(vector<vector<int>>& mat, int k) {
        const int r=mat.size(),  c=mat[0].size();
        k%=c;
        if (k==0) return 1;// early stop
        for(int i=0; i<r; i++){
            bool iEven=(i&1)==0;
            for(int j=0; j<c; j++)
                if(mat[i][j]!=mat[i][(j+(iEven?c-k:k))%c]) return 0;
        }
        return 1;
    }
};
