class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int new_n = 0;
        for (int i = 0; i < n; i++)
            if (A[i] != elem)
                A[new_n++] = A[i];
        return new_n;
    }
};
