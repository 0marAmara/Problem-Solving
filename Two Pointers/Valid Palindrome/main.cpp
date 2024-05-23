#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int lft=0,right=s.size()-1;
        while (lft<right){
            if(!isalnum(s[lft])){
                lft++;
                continue;
            }
            if(!isalnum(s[right])){
                right--;
                continue;
            }
            if(tolower(s[lft])!=tolower(s[right]))
                return false;
            lft++;
            right--;
        }
        return true;
    }
};



int main(){

    string s = " d";
    Solution sol;
    cout << sol.isPalindrome(s) << endl;
    return 0;
}