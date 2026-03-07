class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t = s + s;

        int ans = n;
        int mis0 = 0;

        for(int i = 0; i < 2*n; i++) {

            char expected = (i % 2 == 0) ? '0' : '1';

            if(t[i] != expected) mis0++;

            if(i >= n) {
                int left = i - n;
                char exp_left = (left % 2 == 0) ? '0' : '1';
                if(t[left] != exp_left) mis0--;
            }

            if(i >= n - 1) {
                int mis1 = n - mis0;
                ans = min(ans, min(mis0, mis1));
            }
        }

        return ans;
    }
};
