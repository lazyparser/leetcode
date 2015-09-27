class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> row(matrix.size(), false), col(matrix[0].size(), false);
        for (int i = 0; i < matrix.size(); ++i)
            for (int j = 0; j < col.size(); ++j)
                if (matrix[i][j] == 0)
                    row[i] = col[j] = true;
        for (int i = 0; i < matrix.size(); ++i)
            for (int j = 0; j < col.size(); ++j)
                if (row[i] || col[j])
                    matrix[i][j] = 0;
    }
};
