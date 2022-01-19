class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i=0; i<board.size(); i++) {
            for (int j=0; j<board[0].size(); j++) {
                if (search(board, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }
    
    bool search(vector<vector<char>>& board, const string& word, int i, int j, int flag) {
        if (flag == word.size()) return true;        
        if (i<0 || j<0 || i>board.size()-1 || j>board[0].size()-1) return false;
        if (board[i][j] != word[flag]) return false;
        
        board[i][j] = '\0';
        bool inGrid = search(board, word, i, j-1, flag+1) || search(board, word, i, j+1, flag+1)  // left, right
                   || search(board, word, i+1, j, flag+1) || search(board, word, i-1, j, flag+1); // up, down
        
        board[i][j] = word[flag];
        return inGrid;
    }
};
