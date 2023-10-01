class Solution {
public:
    std::string reverseWords(std::string s) {
        std::istringstream stream(s);
        std::string word, result;
        
        while (stream >> word) {
            std::reverse(word.begin(), word.end());
            result += word + " ";
        }
        
        if (!result.empty()) {
            result.pop_back();  // Remove trailing space
        }
        
        return result;
    }
};
