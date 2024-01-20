#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.size();
    if (n == 0) return 0;

    unordered_map<char, int> charIndex;
    int longest = 0, start = 0;

    for (int i = 0; i < n; ++i) {
        if (charIndex.find(s[i]) != charIndex.end() && charIndex[s[i]] >= start) {
            start = charIndex[s[i]] + 1;
        }
        charIndex[s[i]] = i;
        longest = max(longest, i - start + 1);
    }

    return longest;
}

//dvdf


int main() {
    string x;
    cin >> x;
    cout << lengthOfLongestSubstring(x);


    return 0;
}