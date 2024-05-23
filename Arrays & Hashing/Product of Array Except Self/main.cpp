#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left[nums.size()], right[nums.size()];
        vector<int> output;
        left[0]=1;
        for (int i = 1; i < nums.size(); ++i) {
            left[i]=nums[i-1]*left[i-1];
        }
        right[nums.size()-1]=1;
        for (int i = nums.size()-2; i >= 0; --i) {
            right[i]=nums[i+1]*right[i+1];
        }
        output.reserve(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            output.push_back(left[i]*right[i]);
        }
        return output;
    }
};



int main(){

    vector<int> nums = {1,2,3,4};
    Solution s;
    vector<int> ans = s.productExceptSelf(nums);
    return 0;
}