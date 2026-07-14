class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9, vector<int>(9, 0));
        vector<vector<int>> col(9, vector<int>(9, 0));
        vector<vector<int>> grid(9, vector<int>(9, 0));

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                int num = board[i][j] - '1';
                int box = (i / 3) * 3 + (j / 3);

                if (row[i][num] || col[j][num] || grid[box][num])
                    return false;

                row[i][num]++;
                col[j][num]++;
                grid[box][num]++;
            }
        }

        return true;
    }
};