class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;          // Already at last index
        if (arr[0] == 0) return -1;    // Can't move anywhere

        int maxReach = arr[0];  // Farthest index reachable
        int steps = arr[0];     // Steps left in current jump
        int jumps = 1;          // We make the first jump from index 0

        for (int i = 1; i < n; i++) {
            if (i == n - 1) return jumps;  // Reached last index

            maxReach = max(maxReach, i + arr[i]);
            steps--;

            if (steps == 0) {  // Need to make another jump
                jumps++;
                if (i >= maxReach) return -1;  // Can't move further
                steps = maxReach - i;
            }
        }
        return -1; // If end is never reached
    }
};
