class Solution {

public:

    int uniquePaths(int m, int n) {

        if (m<2||n<2) return 1;

        double numerator = 0.0, denominator = 0.0;

        for (int i = 1; i <= n-1; i++) {

            numerator += log(m-1+i);

            denominator += log(i);

        }

        return (int)(0.5+exp(numerator-denominator));

    }

};
