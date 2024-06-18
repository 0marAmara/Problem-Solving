#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int> &height) {
        int output = 0, lft = 0, rght = height.size() - 1;
        while (lft < rght) {
            output = max(output, abs(lft - rght) * min(height[lft], height[rght]));
            if (height[lft] < height[rght])
                lft++;
            else
                rght--;
        }
        return output;
    }
};

int main() {
    Solution s = Solution();
    vector<int> height = {2, 3, 4, 5, 18, 17, 6};
    int ans = s.maxArea(height);

    cout << ans << endl;

    return 0;
}