class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long ans = 0;  // Variable to store the total cost
        priority_queue<int, vector<int>, greater<int>> q1;  // Priority queue to store the lowest costs from the beginning of the array
        priority_queue<int, vector<int>, greater<int>> q2;  // Priority queue to store the highest costs from the end of the array
        int low = 0;  // Pointer to track the beginning of the array

        // Insert 'candidates' number of costs into q1
        while (low < candidates) {
            q1.push(costs[low]);
            low++;
        }

        int cnt = 0;
        int high = (int)costs.size() - 1;  // Pointer to track the end of the array

        // Adjust 'candidates' if it is greater than the number of elements from the end of the array
        if (candidates > costs.size() - candidates) {
            candidates = costs.size() - candidates;
        }  

        // Insert 'candidates' number of costs into q2 from the end of the array
        while (cnt < candidates) {
            q2.push(costs[high]);
            cnt++;
            high--;
        }    

        while (k--) {
            if (q1.empty()) {  // If q1 is empty, take the lowest cost from q2
                ans += q2.top();
                q2.pop();
                if (low <= high) {
                    q2.push(costs[high]);
                    high--;
                }        
            } else if (q2.empty()) {  // If q2 is empty, take the lowest cost from q1
                ans += q1.top();
                q1.pop();
                if (low <= high) {
                    q1.push(costs[low]);
                    low++;
                } 
            } else if (q1.top() <= q2.top()) {  // If the lowest cost in q1 is less than or equal to the lowest cost in q2, take the lowest cost from q1
                ans += q1.top();
                q1.pop();
                if (low <= high) {
                    q1.push(costs[low]);
                    low++;
                }
            } else {  // If the lowest cost in q2 is less than the lowest cost in q1, take the lowest cost from q2
                ans += q2.top();
                q2.pop();
                if (low <= high) {
                    q2.push(costs[high]);
                    high--;
                }           
            }
        }
        return ans;  // Return the total cost
    }
};
