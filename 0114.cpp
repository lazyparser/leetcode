/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode *root) {
        if (root == nullptr) return;
        auto l = root->left, r = root->right;
        flatten(l);
        flatten(r);
        if (l != nullptr) {
            root->left = nullptr;
            root->right = l;
            while (l->right) l = l->right;
            l->right = r;
        }
    }
};
