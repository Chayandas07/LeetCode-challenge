class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        for (int i = 0; i + 2 < num.size(); i++) {
            // check if current 3 chars are same
            if (num[i] == num[i+1] && num[i] == num[i+2]) {
                string triplet = num.substr(i, 3); // get substring of length 3
                ans = max(ans, triplet);           // keep the lexicographically larger one
            }
        }
        return ans;
    }
};
