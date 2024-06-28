#include<bits/stdc++.h>

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
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        if (lists.size() < 1)
            return nullptr;
        while (lists.size() > 1) {
            vector<ListNode *> mergedList;
            for (int i = 0; i < lists.size(); i += 2) {
                ListNode *l1 = lists[i], *l2 = i + 1 < lists.size() ? lists[i + 1] : nullptr, *merged = mergeLists(l1,
                                                                                                                   l2);
                mergedList.push_back(merged);
            }
            lists = mergedList;
        }
        cout << lists.size() << endl;
        return lists[0];
    }

    ListNode *mergeLists(ListNode *l1, ListNode *l2) {
        if (l2 == nullptr) {
            return l1;
        }
        ListNode *head, *cur = nullptr;
        if (l1->val < l2->val) {
            head = new ListNode(l1->val);
            l1 = l1->next;
        } else {
            head = new ListNode(l2->val);
            l2 = l2->next;
        }
        cur = head;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                cur->next = new ListNode(l1->val);
                l1 = l1->next;
            } else {
                cur->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if (l1) {
            cur->next = l1;
        }
        if (l2) {
            cur->next = l2;
        }
        return head;
    }
};

int main() {
    ListNode *l1 = new ListNode(1, new ListNode(4, new ListNode(5))), *l2 = new ListNode(1, new ListNode(3,
                                                                                                         new ListNode(
                                                                                                                 4))), *l3 = new ListNode(
            2, new ListNode(6));
    Solution s = Solution();
    vector<ListNode *> list = {l1, l2, l3};
    ListNode *l = s.mergeKLists(list);
    while (l) {
        cout << l->val << " ";
        l = l->next;
    }
    cout << endl;
    return 0;
}
