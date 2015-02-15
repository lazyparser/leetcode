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
    ListNode *partition(ListNode *head, int x) {
        vector<ListNode*> big, small;
        for (auto p = head; p; p = p->next) {
            if (p->val < x)
                small.push_back(p);
            else
                big.push_back(p);
        }
        for (int i = 0; i < small.size(); i++)
            small[i]->next = (i + 1 < small.size())? small[i+1] : nullptr;
        for (int i = 0; i < big.size(); i++)
            big[i]->next = (i + 1 < big.size())? big[i+1] : nullptr;
        if (small.size()) {
            if (big.size()) small[small.size() - 1]->next = big[0];
            return small[0];
        } else {
            return (big.size())? big[0] : nullptr; 
        }
    }
};
