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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* h = head;
        // should delete val node
        while (h && h->val == val) h = h->next;
        // redundant
        if (h == nullptr) return nullptr;
        for (ListNode* i = h; i && i->next;) {
            ListNode* node = i->next;
            // FIXME: delete node.
            if (node->val == val)
                i->next = node->next;
            else
                i = i->next;
        }
        return h;
    }
};
