class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int> > path(m, vector<int>(n));
        
        path[0][0] = grid[0][0];
        
        for (int i = 1; i < m; i++)
            path[i][0] = path[i - 1][0] + grid[i][0];
        
        for (int j = 1; j < n; j++)
            path[0][j] = path[0][j - 1] + grid[0][j];
        
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                int left = path[i][j - 1] + grid[i][j];
                int up   = path[i - 1][j] + grid[i][j];
                path[i][j] = up < left ? up : left;
            }
        }
        return path[m - 1][n - 1];
    }
};
