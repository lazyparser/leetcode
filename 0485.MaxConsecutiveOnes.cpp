class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]) {
                count++;
            } else {
                if (count > maxCount)
                    maxCount = count;
                count = 0;
            }
        }
        if (count > maxCount)
            maxCount = count;
        return maxCount;
    }
};

