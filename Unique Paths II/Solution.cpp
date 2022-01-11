class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<int>> vv(m+1, vector<int>(n+1, 0));
        vv[0][1] = 1;
        
        for (int i=1; i<=m; i++) {
            for (int j=1; j<=n; j++) {
                if(!obstacleGrid[i-1][j-1]) {
                    vv[i][j] = vv[i-1][j] + vv[i][j-1];
                }
            }
        }
        return vv[m][n];
    }
};
