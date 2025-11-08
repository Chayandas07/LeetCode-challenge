class Solution {
public:
    int minimumOneBitOperations(int n) {
        if (n == 0) return 0;
        long long fun[32];
        // function[i] = x
        // Means it will take x operations to make the ith bit 1
        fun[0] = 1;
        for (int i = 1; i <= 31; i++) {
            fun[i] = 2 * fun[i - 1] + 1;
        }
        int res = 0;
        int sign = 1;
        for (int i = 30; i >= 0; i--) {
            int ithBit = (n >> i) & 1;
            if (ithBit == 0) continue;
            if (sign > 0) res += fun[i];
            else res -= fun[i];
            sign *= -1;
        }
        return res;
    }
};
