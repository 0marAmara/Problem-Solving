#include <iostream>
using namespace std;

bool isAnagram(string s, string t) {
    int sLtrs[26] = {0}, tLtrs[26] = {0};
    if (s.length() != t.length()) {
        return false;
    }
    for(char c : s) {
        sLtrs[c - 'a']++;
    }
    for(char c : t) {
        tLtrs[c - 'a']++;
    }
    for(int i = 0; i < 26; i++) {
        if (sLtrs[i] != tLtrs[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s, t) << endl;
    return 0;
}