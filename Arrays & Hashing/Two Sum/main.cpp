#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m[(target-nums[i])]>0)
                return {m[(target-nums[i])]-1,i};
            m[nums[i]]=i+1;
        }
    }
};



int main(){

    vector<int> nums={2,7,11,15};
    int target=9;
    Solution s;
    vector<int> result;
    result = s.twoSum(nums, target);
    cout<< result[0]<<" "<<result[1];
    return 0;
}