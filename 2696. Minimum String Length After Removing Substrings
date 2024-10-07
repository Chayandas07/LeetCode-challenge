class Solution {
public:
    int minLength(string s) {
        int i = 0;
        int flag = 0;
        while (true) {
            i = 0;
            flag = 0;
            while (i < s.size() - 1) {
                if (s[i] == 'A' && s[i + 1] == 'B') {
                    s.erase(i, 2);
                    flag = 1;
                } else if (s[i] == 'C' && s[i + 1] == 'D') {
                    s.erase(i, 2);
                    flag = 1;
                }
                if (s.size() < 2)
                    return s.size();
                i++;
            }
            if (flag == 0)
                break;
        }
        return s.size();
    }
};
