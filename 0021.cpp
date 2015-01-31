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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *p1 = l1, *p2 = l2, *head = nullptr, *tail = nullptr, *tmp;
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        while (p1 && p2) {
            if (p1->val < p2->val) {
                tmp = p1;
                p1 = p1->next;
            } else {
                tmp = p2;
                p2 = p2->next;
            }
            if (head) {
                tail->next = tmp;
                tail = tail->next;
            } else {
                head = tail = tmp;
            }
        }
        tail->next = p1 ? p1 : p2;
        return head;
    }
};
