class Solution {
public:
    void DFS(vector<vector<char>>& board, int i, int j, int m, int n) {
        if(i<0 || j<0 || i>=m || j>=n || board[i][j] != 'O') return;
        board[i][j] = 'N';  // flipping 할 수 있는 'O'
        DFS(board, i, j-1, m, n);  // 상하좌우
        DFS(board, i, j+1, m, n);
        DFS(board, i-1, j, m, n);
        DFS(board, i+1, j, m, n);
        
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size(), n = board[0].size();
        
        for(int i=0; i<m; i++) {  // 테두리
            if(board[i][0] == 'O') DFS(board, i, 0, m, n);
            if(board[i][n-1] == 'O') DFS(board, i, n-1, m, n);
     }
        for(int j=0; j<n; j++) {
            if(board[0][j] == 'O') DFS(board, 0, j, m, n);
            if(board[m-1][j] == 'O') DFS(board, m-1, j, m, n);
     }
        
     for(int i=0; i<m; i++) {
         for(int j=0; j<n; j++) {
             if(board[i][j] == 'O') board[i][j] = 'X';
             if(board[i][j] == 'N') board[i][j] = 'O';
         }
      }
    }
};
