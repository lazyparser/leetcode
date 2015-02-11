class Solution {
public:
    bool canJump(int A[], int n) {
        int reach = 0;
        for (int i = 0; i <= reach && reach < n; i++)
            if (reach < i + A[i])
                reach = i + A[i];
        return reach + 1 >= n;
    }
};
