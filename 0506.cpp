class Solution {
    struct pair { int num; int index;};
    static bool compar_num(const pair& l, const pair& r) {
        return l.num > r.num;
    }
    static bool compar_ind(const pair& l, const pair& r) {
        return l.index < r.index;
    }
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<pair> tmp;
        for (int i = 0; i < nums.size(); ++i)
            tmp.push_back((struct pair){.num = nums[i], .index = i});
        sort(tmp.begin(), tmp.end(), Solution::compar_num);
        for (int i = 0; i < tmp.size(); ++i)
            tmp[i].num = i + 1;
        sort(tmp.begin(), tmp.end(), Solution::compar_ind);
        vector<string> ranks;
        string top3[] = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        for (int i = 0; i < tmp.size(); ++i) {
            if (tmp[i].num > 3)
                ranks.push_back(to_string(tmp[i].num));
            else
                ranks.push_back(top3[tmp[i].num - 1]);
        }
        return ranks;
    }
};

