#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        int l = 0, col = matrix[0].size(), row = matrix.size(), r = row * col;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (matrix[mid / col][mid % col] == target)
                return true;
            if (matrix[mid / col][mid % col] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return false;

    }

};


int main() {
    Solution s = Solution();
    vector<vector<int>> matrix = {{1,  3,  5,  7},
                                  {10, 11, 16, 20},
                                  {23, 30, 34, 60}};
    int target = 3;
    cout << s.searchMatrix(matrix, target) << endl;

    return 0;
}
