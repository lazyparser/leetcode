class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int ia = m - 1, ib = n - 1;
        for (int i = n + m - 1;  i >=0 && ia >= 0 && ib >=0; --i) {
            if (A[ia] > B[ib])
                A[i] = A[ia--];
            else
                A[i] = B[ib--];
        }
        for (int i = ib; i >=0; --i)
            A[i] = B[i];
    }
};
