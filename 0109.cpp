/**

 * Definition for singly-linked list.

 * struct ListNode {

 *     int val;

 *     ListNode *next;

 *     ListNode(int x) : val(x), next(NULL) {}

 * };

 */

/**

 * Definition for a binary tree node.

 * struct TreeNode {

 *     int val;

 *     TreeNode *left;

 *     TreeNode *right;

 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}

 * };

 */

class Solution {

public:

    TreeNode* sortedListToBST(ListNode* head) {

        if (head == nullptr) return nullptr;

        int n = 0;

        for (auto p = head; p; p=p->next)

            n++;

        return fixedSortedListToBST(head, n);

        

    }

    TreeNode* fixedSortedListToBST(ListNode* head, int n) {

        if (head == nullptr || n == 0) return nullptr;

        int mid = n/2 + 1;

        TreeNode* tleft = fixedSortedListToBST(head, mid - 1);

        ListNode* p = head;

        for (int i = 0; i < mid - 1; i++)

            p = p->next;

        TreeNode* th = new TreeNode(p->val);

        TreeNode* tright = fixedSortedListToBST(p->next, n - mid);

        th->left = tleft;

        th->right = tright;

        return th;

    }

};
