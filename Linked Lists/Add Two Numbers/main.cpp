#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);

//function to display the list
void printList(ListNode *head) {
    while (head) {
        cout << head->val;
        head = head->next;
        if (head) {
            cout << "->";
        }
    }
}

int main() {
    ListNode *l1 = new ListNode();
    ListNode *l2 = new ListNode();
    l1->val = 2;
    l1->next = new ListNode();
    l1->next->val = 4;
    l1->next->next = new ListNode();
    l1->next->next->val = 3;
    l2->val = 5;
    l2->next = new ListNode();
    l2->next->val = 6;
    l2->next->next = new ListNode();
    l2->next->next->val = 4;
    printList(addTwoNumbers(l1, l2));
    return 0;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    //create the sum list
    ListNode *head = new ListNode();
    //create the iterator node
    ListNode *curr = head;
    //initializing the carry to 0
    int carry = 0;
    //while there is a value to be added to another node
    while (l1 || l2 || carry != 0) {
//        the value of the current node is the sum of the values of the two nodes plus the carry
        curr->val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
//        the carry is the value of the current node divided by 10
        carry = curr->val / 10;
//        the value of the current node is the remainder of the current node divided by 10
        curr->val %= 10;
//        move to the next node
        if (l1) {
            l1 = l1->next;
        }
        if (l2) {
            l2 = l2->next;
        }
//        if there is a value to be added to another node, create a new node
        if (l1 || l2 || carry != 0) {
            curr->next = new ListNode();
            curr = curr->next;
        }
    }
//    return the head of the sum list
    return head;
}