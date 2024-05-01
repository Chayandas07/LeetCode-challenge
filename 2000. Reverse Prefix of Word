class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans;

        // Find the index of the character 'ch' in the word
        int ind = 0;
        for(int i = 0; i < word.length(); i++){
            if(word[i] == ch){
                ind = i;
                break;
            }
        }

        // Push characters onto a stack until the index 'ind'
        stack<char> st;
        for(int i = 0; i <= ind; i++) st.push(word[i]);

        // Pop characters from the stack to reverse the prefix
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        // Append the remaining characters after 'ch'
        for(int i = ind+1; i < word.length(); i++) ans += word[i];

        return ans;
    }
}; 
