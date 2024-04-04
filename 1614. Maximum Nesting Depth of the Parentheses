class Solution {
public:
    // Method to find the maximum depth of nested parentheses in a given string.
    int maxDepth(std::string s) {
        // Initializing variables to keep track of depth and count of open parentheses.
        int depth = 0; // Represents the maximum depth of nested parentheses encountered.
        int count = 0; // Keeps track of the number of open parentheses encountered.
        
        // Iterating through each character in the string.
        for (char ch : s) {
            // If the character is an open parenthesis '(',
            // increment the count of open parentheses encountered.
            if (ch == '(') {
                count++;
                // Update the depth with the maximum of the current depth and the count of open parentheses.
                depth = std::max(depth, count);
            }

            // If the character is a closing parenthesis ')',
            // decrement the count of open parentheses encountered.
            if (ch == ')') {
                count--;
            }
        }
        
        // Return the maximum depth found.
        return depth;
    }
};
