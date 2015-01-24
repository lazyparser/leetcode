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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> travel;
        vector<TreeNode*> stack;
        if (root == nullptr) return travel;
        stack.push_back(root);
        while (stack.size()) {
            auto node = stack.back();
            stack.pop_back();
            travel.push_back(node->val);
            if (node->right) stack.push_back(node->right);
            if (node->left ) stack.push_back(node->left );
        }
        return travel;
    }
};
