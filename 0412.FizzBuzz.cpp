class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> results;
        for (int i = 1; i <= n; ++i) {
            string s = "";
            if (i % 3 && i % 5) {
                s = s + to_string(i);
            } else {
                if (i % 3 == 0)
                    s = s + "Fizz";
                if (i % 5 == 0)
                    s = s + "Buzz";
            }
            results.push_back(s);
        }
        return results;
    }
};

