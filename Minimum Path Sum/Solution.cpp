class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> v(m, grid[0][0]);
                              
        for (int i=1; i<m; i++) {
            v[i] = v[i-1] + grid[i][0];
        }
        for (int j=1; j<n; j++) {
            v[0] += grid[0][j];
            for (int i=1; i<m; i++) {
                v[i] = min(v[i-1], v[i]) + grid[i][j];
            }
        }
        return v[m-1];
    }
};
