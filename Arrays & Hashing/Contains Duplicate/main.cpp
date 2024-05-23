#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,bool> mp;
        for (int num : nums) {
            if(mp[num]) {
                return true;
            }
            mp[num] = true;
        }
        return false;
    }
};

int main(){

    vector<int> input = {1,1,1,3,3,4,3,2,4,2};
    Solution solution;
    cout << solution.hasDuplicate(input) << endl;
    return 0;
}