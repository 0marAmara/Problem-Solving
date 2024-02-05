#include <iostream>
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1== nullptr)
            return list2;
        if(list2==nullptr)
            return list1;
        ListNode*output,*curr;
        if(list1->val<list2->val){
            output=list1;
            list1=list1->next;
        }
        else{
            output=list2;
            list2=list2->next;
        }
        curr=output;
        while(list1!= nullptr&&list2!=nullptr){
            if(list1->val<list2->val){
                curr->next=list1;
                list1=list1->next;
            }else{
                curr->next=list2;
                list2=list2->next;
            }
            curr=curr->next;
        }
        if(!list1){
            curr->next=list2;
        }else{
            curr->next=list1;
        }
        return output;
    }
};

int main() {
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);
    ListNode *list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);
    Solution s;
    ListNode *output = s.mergeTwoLists(list1, list2);
    while (output != nullptr) {
        cout << output->val << " ";
        output = output->next;
    }
    cout << endl;

    return 0;
}