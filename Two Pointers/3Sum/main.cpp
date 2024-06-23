#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    for (int i = 0; i < nums.size()-2; ++i) {
        if(nums[i] > 0) 
            break;
        if(i > 0 && nums[i] == nums[i-1]) {
            continue;
        }
        int j = i+1;
        int k = nums.size()-1;
        while(j < k) {
            if(nums[i] + nums[j] + nums[k] == 0) {
                result.push_back({nums[i], nums[j], nums[k]});
                j++;
                while(j<k&&nums[j] == nums[j-1]) {
                    j++;
                }
            }else if(nums[i] + nums[j] + nums[k] > 0) {
                k--;
            }
            else {
                j++;
            }
        }
    }
    return result;
}
int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = threeSum(nums);
    for (int i = 0; i < result.size(); ++i) {
        for(int j = 0; j < result[i].size(); ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}