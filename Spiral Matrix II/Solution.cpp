class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vv(n, vector<int>(n));
        int k = 1;
        
        for (int i=0; i<(n+1)/2; i++) {
            for (int j=i; j<n-i; j++) vv[i][j] = k++;  // 왼>오
            for (int j=i+1; j<n-i; j++) vv[j][n-i-1] = k++;  // 위>아래
            for (int j=n-i-2; j>=i; j--) vv[n-i-1][j] = k++;  // 오>왼
            for (int j=n-i-2; j>i; j--) vv[j][i] = k++;  // 아래>위
        }
        return vv;
    }
};
