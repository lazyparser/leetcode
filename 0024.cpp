/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return head;
        auto p1 = head, p2 = head->next, p3 = head->next->next;
        p2->next = p1;
        p1->next = swapPairs(p3);
        return p2;
    }
};
