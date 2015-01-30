class Solution {
public:
    int maxSubArray(int A[], int n) {
        int curr = A[0], max = A[0];
        for (int r = 1; r < n; r++) {
            if (curr < 0)
                curr = A[r];
            else
                curr += A[r];
            if (curr > max) max = curr;
        }
        return max;
    }
};
