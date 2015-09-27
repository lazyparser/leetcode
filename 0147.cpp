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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *curr, *p, *newHead;
        if (head == nullptr) return nullptr;
        newHead = head;
        head = head->next;
        newHead->next = nullptr;
        while (head) {
            curr = head;
            head = head->next;
            if (curr->val < newHead->val) {
                curr->next = newHead;
                newHead = curr;
            } else {
                p = newHead;
                while (p->next && p->next->val < curr->val)
                    p = p->next;
                curr->next = p->next;
                p->next = curr;
            }
        }
        return newHead;
    }
};