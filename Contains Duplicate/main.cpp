#include <iostream>
#include <map>
#include <vector>
using namespace std;

int containsDuplicate(vector<int>& nums) {
    map<int,bool> mp;
    for (int i = 0; i < nums.size(); ++i) {
        if(mp[nums[i]]) {
            return true;
        }
        mp[nums[i]] = true;
    }
    return false;
}

int main() {
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
    cout << containsDuplicate(nums) << endl;

    return 0;
}