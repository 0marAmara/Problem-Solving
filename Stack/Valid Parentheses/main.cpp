#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case '(':
                st.push(s[i]);
                break;
            case '[':
                st.push(s[i]);
                break;
            case '{':
                st.push(s[i]);
                break;
            case ')':
                if (st.empty() || st.top() != '(') {
                    return false;
                }
                st.pop();
                break;
            case ']':
                if (st.empty() || st.top() != '[') {
                    return false;
                }
                st.pop();
                break;
            case '}':
                if(st.empty()||st.top()!='{'){
                    return false;
                }
                st.pop();
                break;
        }
    }
    return st.empty();
}
int main() {
    string s = "(]";
    cout << isValid(s);
    return 0;
}