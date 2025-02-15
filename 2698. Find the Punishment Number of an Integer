class Solution {
public:
    int solve(int sum, int n){
        int s = 0;
        int x = n;
        int m = 1;
        while(n){
            s=(n%10)*m + s;
            n/=10;
            m*=10;
            if(s+solve(sum-s,n)==sum){
                // cout<<sum<<endl;
                return sum;
            }
        }
        return x;
    }
    int punishmentNumber(int n) {
        int s = 0;
        for(int i = 1 ; i <= n ; ++i){
            if(solve(i,i*i)==i){
                // cout<<i<<endl;
                s+=(i*i);
            }
        }
        return s;
    }
};
