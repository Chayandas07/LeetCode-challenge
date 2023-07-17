/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 //addTwoNumbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr1 = l1, *ptr2 = l2;
        while(ptr1 != NULL || ptr2 != NULL){
            if(ptr1 == NULL){
                ListNode *newNode = new ListNode(0);//Adding 0's to end of the first list if its size is less than second list
                newNode->next = l1;
                l1 = newNode;
                
                ptr2 = ptr2->next;
            }
            else if(ptr2 == NULL){
                ListNode *newNode = new ListNode(0); //Adding 0's to end of the second list if its size is less than first list
                newNode->next = l2;
                l2 = newNode;
                ptr1 = ptr1->next;
            }
            else{
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
        }
        int carry = 0;
        ListNode *dummy = new ListNode(-1);
        dummy->next = addTwoDigit(l1, l2, carry);
        if(carry != 0){
            ListNode *newNode = new ListNode(carry);
            newNode->next = dummy->next;
            dummy->next = newNode;
        }
        return dummy->next;
    }
    ListNode* addTwoDigit(ListNode* l1, ListNode* l2, int &carry){ //recursion is used to perform addition 
        if(l1 == NULL && l2 == NULL)  return NULL;
        ListNode *newNode = new ListNode(-1);
        newNode->next = addTwoDigit(l1->next, l2->next, carry);
        newNode->val = (l1->val + l2->val + carry) % 10;
        carry = (l1->val + l2->val + carry) / 10;
        return newNode;
    }
};
