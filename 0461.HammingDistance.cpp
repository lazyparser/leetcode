class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int result = 0;
        while (z) {
            if (z%2) result++;
            z = z>>1;
        }
        return result;
    }
};

