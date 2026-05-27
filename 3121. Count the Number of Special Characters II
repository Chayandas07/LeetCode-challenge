#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> last_lower(26, -1);
        vector<int> first_upper(26, -1);
        unordered_set<int> invalid;

        for (int i = 0; i < word.length(); i++) {
            char ch = word[i];

            if (ch >= 'a' && ch <= 'z') {
                int idx = ch - 'a';

                last_lower[idx] = i;

                if (first_upper[idx] != -1) {
                    invalid.insert(idx);
                }

            } else {
                int idx = ch - 'A';

                if (first_upper[idx] == -1) {
                    first_upper[idx] = i;
                }
            }
        }

        int special_count = 0;

        for (int i = 0; i < 26; i++) {
            if (last_lower[i] != -1 &&
                first_upper[i] != -1 &&
                !invalid.count(i)) {

                special_count++;
            }
        }

        return special_count;
    }
};
