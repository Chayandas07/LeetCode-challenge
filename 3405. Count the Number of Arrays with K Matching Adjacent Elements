const int mod=1e9+7;
class Solution {
public:
    static inline long long modPow(long long x, int exp, int Mod=mod){
        if (exp==0) return 1;
        int y=(exp&1)?x:1;
        return modPow(x*x%Mod, exp>>1)*y%Mod;
    }

    // Euclidean algo finds x, y, d such that ax+by = d where d=gcd(a, b)
    static inline int modInverse(int a, int b=mod) {//mod is prime d=1
        int x0 = 1, x1 = 0;
        int r0 = a, r1 = b;
        while (r1 != 0) {
            int q = r0/r1, rr = r1, xx = x1;
            r1 = r0-q * r1;
            x1 = x0-q * x1;
            r0 = rr;
            x0 = xx;
        }
        if (x0 < 0) x0+= b;
        return x0;
    }
    static long long comb(int n, int k){
        if (n<2*k) return comb(n, n-k);
        long long denominator=1;
        for(int i=1; i<=k; i++){
            denominator*=i;
            if (denominator>mod) denominator%=mod;
        }
        long long ans=modInverse(denominator);
        for (int i=n; i>=n-k+1; i--){
            ans*=i;
            if (ans>mod) ans%=mod;
        }
        return ans;
    }
    static int countGoodArrays(int n, int m, int k) {
        return m*modPow(m-1, n-k-1)%mod*comb(n-1, k)%mod;
        
    }
};
