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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<TreeNode*> stack;
        vector<int> post_order, visit;
        if (root == nullptr) return post_order;
        stack.push_back(root);
        visit.push_back(0);
        while (stack.size()) {
            TreeNode *node = stack.back();
            int is_visited = visit.back();
            stack.pop_back();
            visit.pop_back();
            if (is_visited) {
                post_order.push_back(node->val);
            } else {
                stack.push_back(node);
                visit.push_back(1);
                if (node->right) {
                    stack.push_back(node->right);
                    visit.push_back(0);
                }
                if (node->left) {
                    stack.push_back(node->left);
                    visit.push_back(0);
                }
                    
            }
        }
        return post_order;
    }
};

