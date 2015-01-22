class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        map<int, int> m;
        for (int i = 0; i < numbers.size(); i++) {
            auto iter = m.find(numbers[i]);
            if (iter != m.end())
                return vector<int>({iter->second + 1, i + 1});
            else
                m.insert(pair<int, int>(target - numbers[i], i));
        }
    }
};

