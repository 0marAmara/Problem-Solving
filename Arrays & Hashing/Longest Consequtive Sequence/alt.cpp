#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;
        std::sort(nums.begin(), nums.end());
        int lng=1,cur=1,prevNum=nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if(nums[i]==prevNum)
                continue;
            if (nums[i]==prevNum+1){
                cur++;
                prevNum=nums[i];
                continue;
            }
            lng=max(lng,cur);
            cur=1;
            prevNum=nums[i];
        }
        lng=max(lng,cur);
        return lng;
    }
};



int main(){

    vector<int> nums = {100,4,200,1,3,2};
    Solution s;
    cout << s.longestConsecutive(nums) << endl;

    return 0;
}