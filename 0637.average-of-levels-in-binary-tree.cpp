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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> sum, avg;
        vector<int> cnt;
        iter(root, sum, cnt, 0);
        for (int i=0; i< sum.size(); ++i)
            avg.push_back(sum[i] / cnt[i]);
        return avg;
    }

    void iter(TreeNode* root, vector<double> &sum, vector<int> &cnt, int depth) {
        if (root == NULL) return;
        int val = root->val;
        // assert(depth <= sum.size() && sum.size() == cnt.size())
        if (depth > sum.size()) return;
        if (depth == sum.size()) {
            sum.push_back(val);
            cnt.push_back(1);
        } else {
            sum[depth] += val;
            cnt[depth] += 1;
        }
        iter(root->left, sum, cnt, depth+1);
        iter(root->right, sum, cnt, depth+1);
    }
};

