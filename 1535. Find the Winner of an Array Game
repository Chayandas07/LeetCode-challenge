class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        // Find the maximum element in the array.
        int maxElement = *max_element(arr.begin(), arr.end()); 

        // If k is greater than or equal to the array size, the maximum element wins.
        if (k >= arr.size())
            return maxElement; 

        int current_winner = arr[0]; // Initialize the current winner with the first element of the array.
        int current_streak = 0; // Initialize the current streak to 0.

        for (int i = 1; i < arr.size(); i++) {
            // If the current winner is greater than the next element, then he will win the next game.
            if (current_winner > arr[i])
                current_streak++; 

            // the current winner lost the game.
            else {
                current_streak = 1; // Reset the streak since new element becomes the winner.
                current_winner = arr[i]; // Update the current winner.
            }

            // If the current streak reaches k or the current winner is the maximum element
            if (current_streak == k || current_winner == maxElement)
                return current_winner; 
        }

        return current_winner; // Dummy return
    }
};
