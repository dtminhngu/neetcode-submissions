class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set <char> rows [9];
        unordered_set <char> cols[9];
        unordered_set <char> boxes[9];
        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {
                int value = board[i][j];
                if (value == '.') continue;
                int box_index = (i/3)*3 + (j/3);
                if (rows[i].count (value) > 0) return false;
                if (cols[j].count (value) > 0) return false;
                if (boxes[box_index].count (value) > 0) return false;
                rows[i].insert (value);
                cols[j].insert (value);
                boxes[box_index].insert (value);
            }
        }
        return true;
    }
};
