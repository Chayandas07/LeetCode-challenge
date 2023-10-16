class Solution {
    public void rotate(int[][] matrix) {
        int len=matrix.length,t;

        for(int i=0;i<len;i++)
            for(int j=0;j<i;j++){
                t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
            }
        
        for(int i=0;i<len;i++)
            for(int j=0;j<len/2;j++){
                t=matrix[i][j];
                matrix[i][j]=matrix[i][len-1-j];
                matrix[i][len-1-j]=t;
            }
    }
}
