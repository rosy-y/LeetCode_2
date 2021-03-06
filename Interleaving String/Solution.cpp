class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n1 = s1.length(), n2 = s2.length();
        if(n1 + n2 != s3.length()) return false;
        
        bool grid[n1 + 1][n2 + 1];
    
        for(int i=0; i<n1+1; i++) {
            for (int j=0; j<n2+1; j++) {
                if (i == 0 && j == 0) grid[i][j] = true;
                else if (i == 0) grid[i][j] = (grid[i][j-1] && s2[j-1] == s3[i+j-1]);
                else if (j == 0) grid[i][j] = (grid[i-1][j] && s1[i-1] == s3[i+j-1]);
                else grid[i][j] = (grid[i-1][j] && s1[i-1] == s3[i+j-1] ) || (grid[i][j-1] && s2[j-1] == s3[i+j-1] );
            }
        }
        return grid[n1][n2];
    }
};
