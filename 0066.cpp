class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int carry = 1; // trick
        for (int i = digits.size() - 1; i >=0; --i) {
            digits[i] = digits[i] + carry;
            carry = digits[i] / 10;
            digits[i] = digits[i] % 10;
        }
        if (carry)
            digits.insert(digits.begin(), carry);
        return digits;
    }
};
