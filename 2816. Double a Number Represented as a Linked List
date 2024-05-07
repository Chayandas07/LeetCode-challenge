class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        // Initialize a stack to store the values of the linked list
        stack<int> values;
        int val = 0;

        // Traverse the linked list and push its values onto the stack
        while (head != nullptr) {
            values.push(head->val);
            head = head->next;
        }

        ListNode* newTail = nullptr;

        // Iterate over the stack of values and the carryover
        while (!values.empty() || val != 0) {
            // Create a new ListNode with value 0 and the previous tail as its next node
            newTail = new ListNode(0, newTail);
            
            // Calculate the new value for the current node
            // by doubling the last digit, adding carry, and getting the remainder
            if (!values.empty()) {
                val += values.top() * 2;
                values.pop();
            }
            newTail->val = val % 10;
            val /= 10;
        }

        // Return the tail of the new linked list
        return newTail;
    }
};
