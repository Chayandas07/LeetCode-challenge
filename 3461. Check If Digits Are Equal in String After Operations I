class Solution {
public:
    bool hasSameDigits(string s) {
        int iteration = 0; // Tracks how many layers of reduction have been done

        // Continue reducing until only two digits remain
        while (s.size() - iteration != 2) {
            // Replace each character with the sum of adjacent digits (mod 10)
            for (int i = 0; i < s.size() - 1 - iteration; i++) {
                s[i] = ((s[i] - '0') + (s[i + 1] - '0')) % 10 + '0';
            }
            iteration++;
        }

        // Return true if the final two digits are equal
        return s[0] == s[1];
    }
};
