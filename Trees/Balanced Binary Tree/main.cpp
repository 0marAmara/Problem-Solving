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
    pair<int, bool> getHeight(TreeNode *root) {
        if (root == nullptr) {
            return {0, true};
        }
        pair<int, bool> left = getHeight(root->left), right = getHeight(root->right);
        return {max(left.first, right.first) + 1,
                left.second && right.second && (abs(left.first - right.first) <= 1)};
    }

    bool isBalanced(TreeNode *root) {
        if (root == nullptr)
            return true;
        return getHeight(root).second;
    }
};

int main() {

    return 0;
}
