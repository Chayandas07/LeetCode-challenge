class Solution {
public:
    static const int M = 1000000007;

    int numSub(string s) {
        long long ans = 0;
        long long count1 = 0;

        for (char ch : s) {
            if (ch == '1') {
                count1++;
                ans = (ans + count1) % M;
            } else {
                count1 = 0;
            }
        }

        return (int)ans;
    }
};
