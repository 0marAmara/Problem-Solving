#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    map<char, int> row;
    map<char, int> col[9];
    map<char, int> box[9];
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            row[board[i][j]]++;
            col[j][board[i][j]]++;
            box[i / 3 * 3 + j / 3][board[i][j]]++;
            if ((row[board[i][j]] > 1 || col[j][board[i][j]] > 1 || box[i / 3 * 3 + j / 3][board[i][j]] > 1)&&board[i][j] != '.') {
                return false;
            }
        }
        row.clear();
    }
    return true;

}
int main() {
    vector<vector<char>> board = {
            {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
            {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
            {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
            {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
            {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
            {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
            {'.', '6', '.', '.', '.', '2', '8', '.', '.'},
            {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
            {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    cout << isValidSudoku(board);
    return 0;
}