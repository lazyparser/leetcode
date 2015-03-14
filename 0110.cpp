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
    bool isBalanced(TreeNode *root) {
        return depth(root) != -2;
    }
    int depth(TreeNode *root) {
       if (root == nullptr) return 0;
       int l = depth(root->left), r = depth(root->right);
       if (l == -2 || r == -2) return -2;
       if (l - r > 1 || r - l > 1) return -2;
       return l > r ? l + 1 : r + 1;
    }
};
