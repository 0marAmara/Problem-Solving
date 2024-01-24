#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> stk;
    int num1, num2;
    for (int i = 0; i < tokens.size(); i++) {
        switch (tokens[i][0]) {
            case '+':
                num1 = stk.top();
                stk.pop();
                num2 = stk.top();
                stk.pop();
                stk.push(num1 + num2);
                break;
            case '-':
                if(tokens[i].size() != 1){
                    stk.push(stoi(tokens[i]));
                    break;
                }
                num1 = stk.top();
                stk.pop();
                num2 = stk.top();
                stk.pop();
                stk.push(num2 - num1);
                break;
            case '*':
                num1 = stk.top();
                stk.pop();
                num2 = stk.top();
                stk.pop();
                stk.push(num1 * num2);
                break;
            case '/':
                num1 = stk.top();
                stk.pop();
                num2 = stk.top();
                stk.pop();
                stk.push(num2 / num1);
                break;
            default:
                stk.push(stoi(tokens[i]));
        }
    }
    return stk.top();
}

int main() {
    //["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
    vector<string> tokens = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    cout << evalRPN(tokens) << endl;
    return 0;
}