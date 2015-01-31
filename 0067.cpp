class Solution {
public:
    string addBinary(string a, string b) {
        auto na = a.size(), nb = b.size();
        auto nc = na > nb ? na : nb;
        string sum;
        int carry = 0, da, db, dc;
        for (auto i = 1; i <= nc; ++i) {
            da = na >= i? (a[na - i] == '1'? 1 : 0) : 0;
            db = nb >= i? (b[nb - i] == '1'? 1 : 0) : 0;
            dc = da + db + carry;
            carry = dc / 2;
            dc = dc % 2;
            sum = (dc? '1' : '0') + sum;
        }
        if (carry) sum = '1' + sum;
        return sum;
    }
};
