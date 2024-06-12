#include <bits/stdc++.h>

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
    ListNode* reverseList(ListNode* head) {
        if(head== nullptr)
            return nullptr;
        ListNode *rev=new ListNode(head->val);
        while(head){
            rev = new ListNode(head->val,rev);
            head=head->next;
        }
        return rev;

    }
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution s;
    ListNode *ans = s.reverseList(head);
    while(ans){
        cout << ans->val << " ";
        ans = ans->next;
    }
    return 0;
}