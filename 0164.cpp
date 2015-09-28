class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int max_range;
        if (nums.size() < 2) return 0;
        std::sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            int range = nums[i] - nums[i-1];
            if (range > max_range)
                max_range = range;
        }
        return max_range;
    }
};