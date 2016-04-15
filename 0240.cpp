class Solution {

public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size(), n = matrix[0].size();

        for (int row = m - 1, col = 0; row >=0 && col < n;) {

            if (target == matrix[row][col])

                return true;

            else if (target > matrix[row][col])

                col++;

            else

                row--;

        }

        return false;

        

    }

};

