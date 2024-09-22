class Solution {
public:
    long countSteps(long prefix, long n) {
        long steps = 0, nextPrefix = prefix + 1;
        while (prefix <= n) {
            steps += min(n + 1, nextPrefix) - prefix;
            prefix *= 10;
            nextPrefix *= 10;
        }
        return steps;
    }

    int findKthNumber(int n, int k) {
        int curr = 1;
        k--;
        while (k > 0) {
            long steps = countSteps(curr, n);
            if (steps <= k) {
                curr++;
                k -= steps;
            } else {
                curr *= 10;
                k--;
            }
        }
        return curr;
    }
};
