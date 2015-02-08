class Solution {
public:
    void sortColors(int A[], int n) {
        int j = 0;
        vector<int> colors(3, 0);
        for (int i = 0; i < n; i++)
            colors[A[i]] += 1;
        for (int i = 0; i < 3; i++)
            while (colors[i]--)
                A[j++] = i;
    }
};

