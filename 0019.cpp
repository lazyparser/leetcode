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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *before = head, *ahead = head;
        for (int i = 0; i < n; i++)
            ahead = ahead->next;
        if (ahead == nullptr) return head->next;
        while (ahead->next) {
            ahead = ahead->next;
            before = before->next;
        }
        auto p = before->next;
        before->next = p->next;
        delete p;
        return head;
    }
};

