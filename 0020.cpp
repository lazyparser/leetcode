class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                stack.push_back(s[i]);
            } else if (s[i] == ')') {
                if (!stack.empty() && stack.back() == '(')
                    stack.pop_back();
                else
                    return false;
            } else if (s[i] == ']') {
                if (!stack.empty() && stack.back() == '[')
                    stack.pop_back();
                else
                    return false;
            } else if (s[i] == '}') {
                if (!stack.empty() && stack.back() == '{')
                    stack.pop_back();
                else
                    return false;
            }
        }
        return stack.empty();
    }
};
