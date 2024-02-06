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
    bool hasCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while (fast != nullptr) {
            fast = fast->next;
            if (fast != nullptr)
                fast = fast->next;
            else
                return false;
            slow = slow->next;
            if (fast == slow)
                return true;
        }
        return false;
    }
};

int main() {

    return 0;
}