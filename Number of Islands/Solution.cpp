class Solution {
public:
    int DFS(vector<vector<char>>& vv, int i, int j) {
        int m = vv.size(), n = vv[0].size();
        
        if (i < 0 || i == m || j < 0 || j == n || vv[i][j] == '0') return 0;
        
        vv[i][j] = '0';
        DFS(vv, i-1, j);
        DFS(vv, i+1, j);
        DFS(vv, i, j-1);
        DFS(vv, i, j+1);
        return 1;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int res = 0;
        
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                res += DFS(grid, i, j);
            }
        }
        return res;
    }
};
