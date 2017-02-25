class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0, min = nums[0];
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            if (nums[i] < min) min = nums[i];
        }
        return sum - nums.size() * min;
    }
};

