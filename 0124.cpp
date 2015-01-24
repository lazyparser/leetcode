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
    int maxPathSum(TreeNode *root) {
        return iter(root)[1];
    }
    vector<int> iter(TreeNode *root) {
        vector<int> sum(2, 0);
        if (root == nullptr) return sum;
        auto pl = root->left, pr = root->right;
        if (pl == nullptr && pr == nullptr) {
            sum[0] = sum[1] = root->val;
        } else if (pl == nullptr || pr == nullptr) {
            auto child = pl ? pl : pr;
            auto v = iter(child);
            sum[0] = max2(v[0], 0) + root->val;
            sum[1] = max2(v[1], sum[0]);
        } else {
            auto l = iter(pl);
            auto r = iter(pr);
            sum[0] = max3(l[0], r[0], 0) + root->val;
            sum[1] = max3(l[1], r[1], (max2(l[0], 0) + max2(r[0], 0) + root->val));
        }
        return sum;
    }
    int max3(int a, int b, int c) {
        return max2(max2(a, b), c);
    }
    int max2(int a, int b) {
        return a > b ? a : b;
    }
};
