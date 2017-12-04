class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if (r ==0 || c ==0) return nums;
        int rr = nums.size();
        if (rr == 0) return nums;
        int cc = nums[0].size();
        if (rr * cc != r * c) return nums;

        vector<vector<int>> rlts;
        int pos = 0;
        for (int i = 0; i < r; ++i) {
            vector<int> rv;

            for (int j = 0; j < c; ++j) {
                rv.push_back(nums[pos/cc][pos%cc]);
                ++pos;
            }
            rlts.push_back(rv);
        }
        return rlts;
    }
};

