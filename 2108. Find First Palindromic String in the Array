class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto& word : words){
            if(isPalin(word)) {
                return word;
            }
        }
        return "";
    }
    bool isPalin(string& word){
        int i = 0, j = word.size()-1;
        while(i < j){
            if(word[i++] != word[j--]) return false;
        }
        return true;
    }
};
