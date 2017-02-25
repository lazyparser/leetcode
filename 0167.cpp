class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum == target) break;
            if (sum > target)
                --r;
            else
                ++l;
        }
        vector<int> pairs;
        pairs.push_back(l+1);
        pairs.push_back(r+1);
        return pairs;
    }
};

