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
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return head;
        auto l = head, r = head->next;
        while (l->val == r->val && r->next)
            r = r->next;
        if (l->val == r->val) {
            return deleteDuplicates(r->next);
        } else if (l->next != r) {
            return deleteDuplicates(r);
        } else {
            l->next = deleteDuplicates(r);
            return l;
        }
    }
};
