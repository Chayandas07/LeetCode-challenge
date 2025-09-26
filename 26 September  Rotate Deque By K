class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        int n = dq.size();
        if (n == 0) return;

        k %= n; // no need to rotate more than n times
        if (k == 0) return;

        if (type == 1) {
            // Right rotation: move last k elements to front
            rotate(dq.begin(), dq.end() - k, dq.end());
        } 
        else if (type == 2) {
            // Left rotation: move first k elements to back
            rotate(dq.begin(), dq.begin() + k, dq.end());
        }
    }
};

