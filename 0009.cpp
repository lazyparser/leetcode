class Solution {
public:
    bool isPalindrome(int x) {
        int y = 0;
        if (x==0) return true;
        if (x<0 || x%10 == 0) return false;
        while (x) {
            y = y*10 + x%10;
            if (x==y || x/10==y) return true;
            x /= 10;
        }
        return false;
    }
};