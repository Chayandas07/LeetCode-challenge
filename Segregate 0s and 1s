class Solution {
    public int xorAfterQueries(int[] n, int[][] q) {
        int mod = 1_000_000_007;
        for(int[] a:q){
            for(int i = a[0];i<=a[1];i += a[2]){
                long p = (long)(n[i])*a[3];
                n[i] =(int) (p%mod);
            }
        }
        int s = 0;
        for(int i : n) s ^= i;
        return s;
    }
}
