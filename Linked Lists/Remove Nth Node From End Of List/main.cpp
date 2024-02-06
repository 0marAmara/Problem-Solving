#include <iostream>
#include <stack>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *left = head, *right = head;
        while (n--) {
            right = right->next;
        }
        if (right == nullptr) {
            head = head->next;
        } else {
            while (right->next != nullptr) {
                right = right->next;
                left = left->next;
            }
            left->next = left->next->next;
        }
        return head;
    }
};

int main() {
    ListNode *head = new ListNode(1);

    Solution solution;
    ListNode *result = solution.removeNthFromEnd(head, 1);
    while (result) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    return 0;
}