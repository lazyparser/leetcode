class Solution {
public:
    string convertToBase7(int num) {
        bool sign = false;
        if (num == 0) return "0";
        if (num < 0) {
            num = -num;
            sign = true;
        }
        string base7("");
        while (num) {
            base7 = to_string(num%7) + base7;
            num /= 7;
        }
        if (sign) base7 = "-" + base7;
        return base7;
    }
};
