class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        unordered_set<int> seen;

        for (string &num : nums) {
            seen.insert(stoi(num, nullptr, 2));
        }

        for (int i = 0; i < (1 << n); i++) {
            if (!seen.count(i)) {
                string bin = bitset<16>(i).to_string();
                return bin.substr(16 - n);
            }
        }
        return "";
    }
};
