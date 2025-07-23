class Solution {
public:
    long long maximumGain(string s, int x, int y) {
        long long total = 0;

        if (x >= y) {
            auto [afterFirst, gain1] = removePattern(s, 'a', 'b', x);
            total += gain1;
            auto [_, gain2] = removePattern(afterFirst, 'b', 'a', y);
            total += gain2;
        } else {
            auto [afterFirst, gain1] = removePattern(s, 'b', 'a', y);
            total += gain1;
            auto [_, gain2] = removePattern(afterFirst, 'a', 'b', x);
            total += gain2;
        }

        return total;
    }

private:
    pair<string, long long> removePattern(const string& s, char first, char second, int value) {
        string result;
        long long score = 0;

        for (char ch : s) {
            if (!result.empty() && result.back() == first && ch == second) {
                result.pop_back();
                score += value; 
            } else {
                result.push_back(ch);
            }
        }

        return {result, score};
    }
};
