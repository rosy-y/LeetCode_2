class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int pre, s = 0;
        vector<int> v(n, 0);
        
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                int tmp = v[j];
                if (!i || !j || matrix[i][j] == '0') {
                    v[j] = matrix[i][j] - '0';
                }
                else {
                    v[j] = min(pre, min(v[j], v[j-1])) + 1;
                }
                s = max(v[j], s);
                pre = tmp;
            }
        }
        return s * s;
    }
};
