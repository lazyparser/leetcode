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
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return nullptr;
        unordered_set<ListNode*> s;
        auto p = head;
        while (p && s.find(p) == s.end()) {
            s.insert(p);
            p = p->next;
        }
        return p;
    }
};
