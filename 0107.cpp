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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<TreeNode*> > p;
        vector<vector<int> > v;
        if (root == nullptr) return v;
        p.push_back(vector<TreeNode*>({root}));
        for (int i = 0; i < p.size(); i++) {
            vector<TreeNode*> one_layer;
            for (auto j : p[i]) {
                if (j->left) one_layer.push_back(j->left);
                if (j->right) one_layer.push_back(j->right);
            }
            if (one_layer.size()) p.push_back(one_layer);
        }
        for (int i = p.size() - 1; i >= 0; --i) {
            vector<int> one_layer;
            for (auto j : p[i])
                one_layer.push_back(j->val);
            v.push_back(one_layer);
        }
        return v;
    }
};
