#include <iostream>
#include <stack>

using namespace std;

class MinStack {
    stack<int> stk, minStk;
public:
    MinStack() {

    }

    void push(int val) {
        stk.push(val);
        if (minStk.empty() || val <= minStk.top()) {
            minStk.push(val);
        }else {
            minStk.push(minStk.top());
        }
    }

    void pop() {
        stk.pop();
        minStk.pop();
    }

    int top() {
        return stk.top();
    }

    int getMin() {
        return minStk.top();
    }
};
int main() {

    return 0;
}