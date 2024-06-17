class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c<=2) return 1;
        while(c% 2==0) c/=2; 
        if (c%4 ==3) return 0;
        int sqrt_c=sqrt(c);
        for (int k = 3; k<=sqrt_c; k+=4) {
            int exp = 0;
            if (c % k == 0) {
                while (c % k == 0) {
                    exp++;
                    c /= k;
                }
                if (exp %2 != 0)
                    return 0;
            }
        }    
        return c%4!=3;
    }
};
