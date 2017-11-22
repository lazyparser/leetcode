class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        for (int i = 0; i < ops.size(); i++) {
            string s = ops[i];
            if (s == "C") {
                // assert v.size() > 0
                v.pop_back();
            } else if (s == "D") {
                // assert v.size() > 0
                v.push_back(v.back() * 2);
            } else if (s == "+") {
                // asserv v.size() >= 2
                v.push_back(v[v.size() - 1] + v[v.size() - 2]);
            } else /*integer*/ {
                v.push_back(stoi(s));
            }
        }
        int sum = 0;
        for (int i = 0; i < v.size(); i++)
            sum += v[i];
        return sum;
    }
};
