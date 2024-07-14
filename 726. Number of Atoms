

class Solution {
public:
    string countOfAtoms(string formula) {
        stack<map<string, int>> stk;
        stk.push(map<string, int>());
        int n = formula.size();
        for (int i = 0; i < n;) {
            if (formula[i] == '(') {
                stk.push(map<string, int>());
                i++;
            } else if (formula[i] == ')') {
                auto top = stk.top();
                stk.pop();
                i++;
                int i_start = i;
                while (i < n && isdigit(formula[i])) {
                    i++;
                }
                int multiplier = i > i_start ? stoi(formula.substr(i_start, i - i_start)) : 1;
                for (auto &p : top) {
                    stk.top()[p.first] += p.second * multiplier;
                }
            } else {
                int i_start = i;
                i++;
                while (i < n && islower(formula[i])) {
                    i++;
                }
                string element = formula.substr(i_start, i - i_start);
                i_start = i;
                while (i < n && isdigit(formula[i])) {
                    i++;
                }
                int count = i > i_start ? stoi(formula.substr(i_start, i - i_start)) : 1;
                stk.top()[element] += count;
            }
        }
        auto &counts = stk.top();
        vector<pair<string, int>> elements(counts.begin(), counts.end());
        sort(elements.begin(), elements.end());
        string result;
        for (auto &p : elements) {
            result += p.first;
            if (p.second > 1) {
                result += to_string(p.second);
            }
        }
        return result;
    }
};
