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
    void reorderList(ListNode *head) {
        ListNode *p1 = head, *p2 = head;
        if (head == nullptr) return;
        if (head->next == nullptr) return;
        if (head->next->next == nullptr) return;
        while ( p2->next && p2->next->next) {
            p1 = p1->next;
            p2 = p2->next->next;
        }
        auto half_head = p1->next;
        p1->next = nullptr;
        vector<ListNode*> next_list;
        for (auto p = half_head; p; p = p->next) {
            next_list.push_back(p);
        }
        auto p = head;
        while (next_list.size()) {
            auto t = next_list.back();
            next_list.pop_back();
            t->next = p->next;
            p->next = t;
            p = t->next;
        }
    }
};

