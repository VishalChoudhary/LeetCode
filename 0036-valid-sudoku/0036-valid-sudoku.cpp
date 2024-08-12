class Solution {
    bool isValid(vector<vector<char>> &board, int row, int col, char ch) {
        // Check the row for duplicates
        for (int j = 0; j < 9; j++) {
            if (j != col && board[row][j] == ch) return false;
        }
        // Check the column for duplicates
        for (int i = 0; i < 9; i++) {
            if (i != row && board[i][col] == ch) return false;
        }
        // Check the 3x3 sub-box for duplicates
        int rf = row - (row % 3); 
        int cf = col - (col % 3); 
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i + rf][j + cf] == ch && (i + rf) != row && (j + cf) != col) return false;
            }
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    char ch = board[i][j];
                    if (!isValid(board, i, j, ch)) return false;
                }
            }
        }
        return true;
    }
};