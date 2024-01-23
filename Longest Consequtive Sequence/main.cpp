#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }
    sort(nums.begin(), nums.end());
    int count[nums.size()];
    count[0] = 1;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] == nums[i-1]||nums[i] == nums[i-1]+1){
            count[i] = count[i-1]+(nums[i]-nums[i-1]);
        }
        else{
            count[i] = 1;
        }
    }
    return *max_element(count, count+nums.size());
}
int main() {
    vector nums = {1,2,0,1};
    cout << longestConsecutive(nums) << endl;
    return 0;
}