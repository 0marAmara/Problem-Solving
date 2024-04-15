#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool> mp;
        for (int i = 0; i < nums.size(); ++i) {
            if(mp[nums[i]]) {
                return true;
            }
            mp[nums[i]] = true;
        }
        return false;
    }
};

int main(){
    vector<int> input = {1,1,1,3,3,4,3,2,4,2};
    Solution solution;
    cout << solution.containsDuplicate(input) << endl;
    return 0;
}