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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr;
        auto ph = head;
        head = head->next;
        ph->next = nullptr;
        while (head) {
            auto p = head;
            head = head->next;
            p->next = ph;
            ph = p;
        }
        return ph;
    }
};