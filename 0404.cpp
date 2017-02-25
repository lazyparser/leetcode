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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) return 0;
        return sumOfLeftLeaves(root->left, true) + sumOfLeftLeaves(root->right, false);

    }
    int sumOfLeftLeaves(TreeNode* root, bool isLeft) {
        if (root == nullptr) return 0;
        if (root->left == nullptr && root->right == nullptr)
            return isLeft ? root->val : 0;
        return sumOfLeftLeaves(root->left, true) + sumOfLeftLeaves(root->right, false);
    }
};

