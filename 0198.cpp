class Solution {

public:

    int rob(vector<int>& nums) {

        vector<int> amount(nums);

        auto n = nums.size();

        if (n == 0) return 0;

        if (n == 1) return nums[0];

        if (n == 2) return nums[0] > nums[1] ? nums[0] : nums[1];

        for (int i = 2; i < n; i++) {

            if (i-3 >= 0 && amount[i-3] > amount[i-2])

                amount[i] += amount[i-3];

            else

                amount[i] += amount[i-2];

        }

        return amount[n-1] > amount[n-2] ? amount[n-1] : amount[n-2];

    }

};
