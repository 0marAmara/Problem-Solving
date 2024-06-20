#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size())
            return false;
        int l = 0;
        bool flag = true;
        int mp[26] = {0};
        for (auto c: s1)
            mp[c - 'a']++;
        for (int i = 0; i < s1.size() - 1; ++i) {
            mp[s2[i] - 'a']--;
        }

        for (int i = s1.size() - 1; i < s2.size(); ++i) {
            mp[s2[i] - 'a']--;
            flag = true;
            for (auto val: mp) {
                if (val != 0) {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                return true;
            mp[s2[l] - 'a']++;
            l++;
        }
        return false;
    }
};


int main() {

    string s1 = "ab";
    string s2 = "eidbaoo";
    Solution sol;
    cout << sol.checkInclusion(s1, s2) << endl;
    return 0;
}
