class Solution {
public:
    static int GCD(unsigned x, unsigned y){
        const int bx=countr_zero(x), by=countr_zero(y);
        const int bb=min(bx, by);
        x>>=bx, y>>=by;
        for(unsigned r; y; y=min(y, r)){
            r=x%y;
            x=exchange(y, r);
        }
        return x<<bb;
    }
    static int countTriples(int n) {
        int cnt=0;
        int nsqrt=sqrt(n);
        for (int s=2; s<=nsqrt; s++) {
            for (int t=1+(s&1); t<s; t+=2) {
                if (GCD(s, t)!=1) continue;

            //    int a=s*s-t*t;
            //    int b=2*s*t;
                int c=s*s+t*t;

                if (c>n) break;

                // k multiples: ka, kb, kc
                int kmax=n/c;
                // count (a,b,c) and (b,a,c)
                cnt+=2*kmax;
            }
        }
        return cnt;
    }
};
