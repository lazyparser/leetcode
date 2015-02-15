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
    bool isSymmetric(TreeNode *root) {
        if (root == nullptr) return true;
        return  isSymmetricSubTree(root->left, root->right);
    }
    bool isSymmetricSubTree(TreeNode *l, TreeNode *r) {
        if (l == nullptr && r == nullptr) return true;
        if (l == nullptr || r == nullptr) return false;
        return l->val == r->val && isSymmetricSubTree(l->left, r->right) && isSymmetricSubTree(l->right, r->left);
    }
};
