class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int len = 0;
        if (n < 2) return n;
        for (int i = 1; i < n; i++) {
            if (A[len] == A[i] && (len > 0 && A[len] == A[len-1]))
                continue;
            A[++len] = A[i];
        }
        return len + 1;
    }
};
