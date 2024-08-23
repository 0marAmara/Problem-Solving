#include <bits/stdc++.h>

using namespace std;
//  Old Solution
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         map<int,bool> mp;
//         for (int num : nums) {
//             if(mp[num]) {
//                 return true;
//             }
//             mp[num] = true;
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                return true;
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