class Solution {
public:
    int largestVariance(string s) {
        vector<int> arr(26); // Array to store the frequency of each letter (a-z)
        for(auto x : s) {
            arr[x - 'a']++; // Increment the count for the corresponding letter
        }
        int ans = 0; // Variable to store the maximum variance found
        for(char i = 'a'; i <= 'z'; i++) { // Iterate through each letter i
            for(char j = 'a'; j <= 'z'; j++) { // Iterate through each letter j
                // Skip if j is the same as i or either i or j has a frequency of 0
                if(j == i || arr[i - 'a'] == 0 || arr[j - 'a'] == 0)
                    continue;
                for(int k = 1; k <= 2; k++) { // Perform the calculation twice (forward and backward)
                    int A1 = 0; // Counter for letter i
                    int A2 = 0; // Counter for letter j
                    for(auto x : s) {
                        if(x == i)
                            A1++; // Increment A1 if the current letter is i
                        if(x == j)
                            A2++; // Increment A2 if the current letter is j
                        if(A2 > A1) {
                            A1 = 0;
                            A2 = 0; // Reset A1 and A2 if A2 becomes greater than A1
                        }
                        if(A1 > 0 && A2 > 0)
                            ans = max(ans, A1 - A2); // Update the maximum variance if A1 - A2 is greater
                    }
                    reverse(s.begin(), s.end()); // Reverse the string for the next iteration
                }
            }
        }
        return ans; // Return the maximum variance found
    }
};
