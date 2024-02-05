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
    void reorderList(ListNode *head) {
        stack<ListNode *> stack1;
        ListNode *itr = head;
        int i = 0;
        while (itr != nullptr) {
            stack1.push(itr);
            itr = itr->next;
            i++;
        }
        itr = head;
        while (i > 0) {
            stack1.top()->next = itr->next;
            itr->next = stack1.top();
            stack1.pop();
            itr = itr->next->next;
            i -= 2;
        }
        itr->next = nullptr;
        return;
    }
};

int main() {
    ListNode list1 = ListNode(1), *iter = &list1;
    list1.next = new ListNode(2);
    list1.next->next = new ListNode(3);
    list1.next->next->next = new ListNode(4);
    list1.next->next->next->next = new ListNode(5);
    Solution s;
    s.reorderList(&list1);

    while (iter != nullptr) {
        cout << iter->val << " ";
        iter = iter->next;
    }

    return 0;
}