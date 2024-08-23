#include <iostream>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size())
        return false;
    int freqMap[26] = {0};
    for (size_t i = 0; i < s.size(); i++)
    {
        freqMap[s[i] - 'a']++;
        freqMap[t[i] - 'a']--;
    }
    for (size_t i = 0; i < 26; i++)
    {
        if (freqMap[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s, t) << endl;
    return 0;
}