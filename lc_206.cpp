// https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;  // 1. save the rest of the list
            curr->next = prev;            // 2. flip the arrow
            prev = curr;                  // 3. advance prev
            curr = next;                  // 4. advance curr
        }

        return prev;  // prev is on the old tail = new head
    }
};
