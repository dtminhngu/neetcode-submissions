bool Try (int r, int c, int k, vector<vector<char>>& board, string word) {
    if (k == word.size()) return true;
    if (r < 0 || c < 0 || r >= board.size() || c >= board[0].size() || board[r][c] == '#') return false;
    if (word[k] != board[r][c]) return false;
    char temp = board[r][c];
    board[r][c] = '#';
    bool found = Try (r + 1, c, k + 1, board, word) || Try (r - 1, c, k + 1, board, word) ||
                 Try (r, c + 1, k + 1, board, word) || Try (r, c - 1, k + 1, board, word);
    board[r][c] = temp;
    return found;
}

class Solution {
   public:
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size();
        int c = board[0].size();
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (Try (i, j, 0, board, word)) return true;
            }
        }
        return false;
    }
};
