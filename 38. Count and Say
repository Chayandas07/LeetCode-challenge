class Solution {
public:
    string countAndSay(int n) {
        string curr = "1";
        if (n == 1) return curr;
        for (int i = 2; i <= n; i++) {
            string next = "";
            int cnt = 1;
            char ele = curr[0];
            for (int j = 1; j < curr.size(); j++) {
                if (curr[j] == ele) {
                    cnt++;
                } else {
                    next += to_string(cnt) + ele;
                    ele = curr[j];
                    cnt = 1;
                }
            }
            next += to_string(cnt) + ele;
            curr = next;
        }
        return curr;
    }
};
