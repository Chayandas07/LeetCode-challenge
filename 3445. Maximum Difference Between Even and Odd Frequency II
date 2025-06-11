class MinBIT {
public:
    static const int MAX;
    int n;
    vector<int> data;

    MinBIT(int length) {
        n = length;
        data.assign(length + 2, MAX);
    }

    void insert(int index, int value) {
        for (int i = index + 1; i <= n; i += i & -i) {
            data[i] = min(data[i], value);
        }
    }

    int getMin(int index) {
        int result = MAX;
        for (int i = index + 1; i > 0; i -= i & -i) {
            result = min(result, data[i]);
        }
        return result;
    }
};

const int MinBIT::MAX = INT_MAX;

class Solution {
public:
    int maxDifference(string s, int k) {
        int length = s.size();
        int result = INT_MIN;

        for (int first = 0; first < 5; ++first) {
            for (int second = 0; second < 5; ++second) {
                if (first == second) continue;

                vector<int> diff(length + 1, 0);
                vector<int> parityA(length + 1, 0);
                vector<int> parityB(length + 1, 0);
                vector<int> countB(length + 1, 0);

                for (int i = 1; i <= length; ++i) {
                    int digit = s[i - 1] - '0';
                    diff[i] = diff[i - 1] + (digit == first ? 1 : 0) - (digit == second ? 1 : 0);
                    parityA[i] = (parityA[i - 1] + (digit == first ? 1 : 0)) & 1;
                    parityB[i] = (parityB[i - 1] + (digit == second ? 1 : 0)) & 1;
                    countB[i] = countB[i - 1] + (digit == second ? 1 : 0);
                }

                MinBIT storage[2][2] = {
                    { MinBIT(length + 1), MinBIT(length + 1) },
                    { MinBIT(length + 1), MinBIT(length + 1) }
                };

                for (int j = 0; j <= length; ++j) {
                    if (j >= k) {
                        int back = j - k;
                        int pA = parityA[back];
                        int pB = parityB[back];
                        int bCount = countB[back];
                        storage[pA][pB].insert(bCount, diff[back]);
                    }

                    if (j > 0 && countB[j] > 0) {
                        int altA = 1 - parityA[j];
                        int curB = parityB[j];
                        int minPrev = storage[altA][curB].getMin(countB[j] - 1);

                        if (minPrev != MinBIT::MAX) {
                            result = max(result, diff[j] - minPrev);
                        }
                    }
                }
            }
        }

        return result == INT_MIN ? 0 : result;
    }
};
