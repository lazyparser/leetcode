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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode head(0), *tail = &head;
        int carry = 0;
        while (l1 || l2 || carry) {
            tail->next = new ListNode(0);
            int &v = tail->next->val;
            if (l1) {
                v += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                v += l2->val;
                l2 = l2->next;
            }
            v += carry;
            carry = v/10;
            v %= 10;
            tail = tail->next;
        }
        return head.next;
    }
};

