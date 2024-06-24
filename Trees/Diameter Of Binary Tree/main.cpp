#include<bits/stdc++.h>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    pair<int, int> recDiameter(TreeNode *root) {
        if (root == nullptr) {
            return {-1, 0};
        }
        pair<int, int> left = recDiameter(root->left), right = recDiameter(root->right);
        return {max(left.first, right.first) + 1, max(max(left.second, right.second), 2 + left.first + right.first)};
    }

    int diameterOfBinaryTree(TreeNode *root) {
        return recDiameter(root).second;
    }
};

int main() {
//    Input: root = [1,2,3,4,5]
//    Output: 3
    TreeNode *root = new TreeNode(1, new TreeNode(2, new TreeNode(4), new TreeNode(5)), new TreeNode(3));

    Solution s;
    cout << s.diameterOfBinaryTree(root);


    return 0;
}
