class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size(), col = board[0].size();
        int a1[9][9]={0}, a2[9][9]={0}, a3[9][9]={0};
        
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                if (board[i][j] != '.') {
                    int k = i/3*3 + j/3;  // 3*3 확인
                    int n = board[i][j]-'0'-1;
                    if (a1[i][n] || a2[j][n] || a3[k][n]) return false;
                    a1[i][n] = a2[j][n] = a3[k][n] = 1;
                }                
            }
        }
        return true;
    }
};
