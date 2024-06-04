class Solution {
public:
    int longestPalindrome(string s) {
        int c = 0; // odd count
        unordered_map<char, int>m;
        for(auto ch : s) {
            m[ch]++;
            if (m[ch] & 1)
                c++;
            else    
                c--;
        }
        if (c > 1)
            return s.length() - c + 1;
        return s.length();
    }
};
