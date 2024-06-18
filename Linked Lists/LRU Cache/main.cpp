#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    Node *next, *prev;
    int val, key;

    Node(int k = 0, Node *nxt = nullptr, Node *pre = nullptr, int v = 0) {
        {
            key = k;
            next = nxt;
            prev = pre;
            val = v;
        }
    }
};

class List {
private:
    Node *head, *tail;
public:
    List() {
        head = new Node();
        tail = new Node(0, nullptr, head);
        head->next = tail;
    }

    void addItem(Node *item) {
        item->next = tail;
        item->prev = tail->prev;
        tail->prev->next = item;
        tail->prev = item;
    }

    void getItem(Node *item) {
        item->prev->next = item->next;
        item->next->prev = item->prev;
        addItem(item);
    }

    void addAtFullCapacity(Node *item) {
        head->next = head->next->next;
        head->next->prev = head;
        addItem(item);
    }

    int getFirstEl() {
        return head->next->key;
    }
};

class LRUCache {
private:
    map<int, Node *> mp;
    List list;
    int size, nOfElements = 0;

public:
    LRUCache(int capacity) {
        size = capacity;
        list = List();
    }

    int get(int key) {
        Node *needed = mp[key];
        if (needed == nullptr)
            return -1;
        list.getItem(needed);
        return needed->val;
    }

    void put(int key, int value) {
        Node *newNode = new Node(key, nullptr, nullptr, value);
        if (nOfElements < size && mp[key] == nullptr) {
            list.addItem(newNode);
            nOfElements++;
        } else if (mp[key] != nullptr) {
            mp[key]->val = value;
            list.getItem(mp[key]);
            return;
        } else {
            mp.erase(list.getFirstEl());
            list.addAtFullCapacity(newNode);
        }
        mp[key] = newNode;
    }
};

int main() {
//    ["LRUCache","put","put","put","put","get","get"]
//    [[2],[2,1],[1,1],[2,3],[4,1],[1],[2]]

    LRUCache obj = LRUCache(2);

    obj.put(2, 1);
    obj.put(1, 1);
    obj.put(2, 3);
    obj.put(4, 1);
    cout << obj.get(1) << endl;
    cout << obj.get(2) << endl;

    return 0;
}