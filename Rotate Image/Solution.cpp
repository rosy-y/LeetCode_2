class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
         for (int i=0; i<(n + 1)/2; i++) {
            for (int j=0; j<n/2; j++) {
                int tmp = matrix[n-1-j][i];  // tmp = 21
                matrix[n-1-j][i] = matrix[n-1-i][n-j-1];  // 21자리 = 25
                matrix[n-1-i][n-1-j] = matrix[j][n-1-i];  // 25자리 = 5
                matrix[j][n-1-i] = matrix[i][j];  // 5의자리 = 1
                matrix[i][j] = tmp;  // 1의자리 = 21
            }
        }
    }
};
