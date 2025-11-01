class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s(nums.begin(), nums.end());
        vector<int> vec;
        ListNode* curr = head;

        while (curr) {
            if (s.count(curr->val) == 0) vec.push_back(curr->val);
            curr = curr->next;
        }

        if (vec.empty()) return nullptr;

        curr = head;
        ListNode* prev = nullptr;
        for (int v : vec) {
            curr->val = v;
            prev = curr;
            curr = curr->next;
        }

        if (prev) prev->next = nullptr;
        return head;
    }
};
