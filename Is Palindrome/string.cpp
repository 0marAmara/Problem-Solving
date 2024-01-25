#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    char *p1=&s[0],*p2=&s[s.size()-1];
    while(p1<p2){
        if(!isalnum(*p1)){
            p1++;
            continue;
        }
        if(!isalnum(*p2)){
            p2--;
            continue;
        }
        if(tolower(*p1)!= tolower(*p2)){
            return false;
        }
        p1++;
        p2--;
    }
    return true;

}

int main() {
    string s = "0P";
    cout << isPalindrome(s) << endl;
    return 0;
}