#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, res = 0;
        map<char, int> mp;
        for (int r = 0; r < s.size(); ++r) {
            mp[s[r]]++;
            if (r - l + 1 -
                max_element(mp.begin(), mp.end(), [](auto a, auto b) { return a.second < b.second; })->second > k) {
                mp[s[l]]--;
                l++;
                continue;
            }
            res = max(res, r - l + 1);
        }
        return res;
    };
};

int main() {

    string s = "ABAA";
    int k = 0;
    Solution obj;
    cout << obj.characterReplacement(s, k);
    return 0;
}