class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < findNums.size(); ++i) {
            int k = 0, greaterNum = -1;
            while (k < nums.size() && nums[k] != findNums[i])
                ++k;

            for (int j = k + 1; j < nums.size(); ++j) {
                if (nums[j] > findNums[i]) {
                    greaterNum = nums[j];
                    break;
                }
            }
            result.push_back(greaterNum);
        }
        return result;
    }
};

