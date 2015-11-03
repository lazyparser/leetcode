// move-zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) continue;
            if (k != i) nums[k] = nums[i];
            ++k;
        }
        for (int i = k; i < nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};
