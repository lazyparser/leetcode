class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0, m = grid.size(), n = m ? grid[0].size() : 0;
        for (int i = 0; i < m; ++i) {
            for ( int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) continue;
                if (i == 0 || grid[i-1][j  ] == 0)
                    perimeter++;
                if (j == 0 || grid[i  ][j-1] == 0)
                    perimeter++;
                if (i == m-1 || grid[i+1][j] == 0)
                    perimeter++;
                if (j == n-1 | grid[i][j+1] == 0)
                    perimeter++;
            }
        }
        return perimeter;
    }
};
