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
    int minDepth(TreeNode *root) {
        if (root == nullptr) return 0;
        if (root->left) {
            if (root->right) {
                int l = minDepth(root->left), r = minDepth(root->right);
                return l < r ? l + 1 : r + 1;
            } else {
                return minDepth(root->left) + 1;
            }
        } else if (root->right) {
            return minDepth(root->right) + 1;
        } else {
            return 1;
        }

    }
};
