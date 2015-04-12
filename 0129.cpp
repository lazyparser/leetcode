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
    int sumNumbers(TreeNode *root) {
        auto ret = sumSubTree(root);
        return ret.second;
    }
    pair<int, int> sumSubTree(TreeNode *root) {
        if (root == nullptr) return pair<int, int>(0, 0);
        auto l = sumSubTree(root->left);
        auto r = sumSubTree(root->right);
        int num = 10 * (l.first + r.first);
        if (num == 0) num = 1;
        int sum = num * root->val + l.second + r.second;
        return pair<int, int>(num, sum);
    }
};

