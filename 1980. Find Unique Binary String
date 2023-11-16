class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<int> seen;

        for (const auto& binaryString : nums) {
            seen.insert(stoi(binaryString, nullptr, 2));
        }

        int n = nums[0].length();

        for (int i = 0; i <= nums.size(); i++) {
            if (seen.find(i) == seen.end()) {
                return bitset<32>(i).to_string().substr(32 - n);
            }
        }

        return "";        
    }
};
