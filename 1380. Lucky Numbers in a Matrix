class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        bool a = false , b = false;
        int n = matrix.size();
        int m = matrix[0].size();

        // below loops are for traversing matrix
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){

                // find minimum element in matrix
                int at = *min_element(matrix[i].begin(),matrix[i].end());

                // check that min element is this element or not
                if(matrix[i][j] == at)a = true;

                // now check the column
                int kt = INT_MIN;

                // check for the max element in that column
                for(int k = 0;k<n;k++){
                    if(matrix[k][j]>kt)kt = matrix[k][j];
                }
                // compare  with current element
                if(kt == matrix[i][j])b = true;

                // if both conditions are true , then store the answer
                if(a && b)ans.push_back(matrix[i][j]);
                a = false , b = false;
            }
        }
        return ans;
    }
};
