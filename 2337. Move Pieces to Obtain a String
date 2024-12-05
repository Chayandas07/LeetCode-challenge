class Solution {
public:
    bool canChange(string start, string target) {
        int left = 0, right = 0;

        for (int i = 0; i < start.size(); i++) {
            if (start[i] == 'R') {
                right++;
                if (left != 0)
                    return false;
            } else if (start[i] == 'L')
                left--;
            if (target[i] == 'R')
                right--;
            else if (target[i] == 'L') {
                left++;
                if (right != 0)
                    return false;
            }
            if (left < 0 || right < 0)
                return false;
        }
        return left == 0 and right == 0;
    }
};
