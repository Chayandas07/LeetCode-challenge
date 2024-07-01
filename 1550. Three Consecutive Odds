class Solution {
public:
    bool threeConsecutiveOdds(std::vector<int>& arr) {
        std::string binaryString;
        for (int num : arr) {
            binaryString += (num % 2) ? '1' : '0';
        }
        return binaryString.find("111") != std::string::npos;
    }
};
