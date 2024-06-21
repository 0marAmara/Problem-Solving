#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int low=0,high=nums.size()-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>=nums[low]){
            if(nums[mid]<target||target<nums[low]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        else{
            if(nums[mid]>target||target>nums[high]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}

int main() {
    //[4,5,6,7,0,1,2]
    vector<int> nums={5,1,3};
    int target=5;
    cout<<search(nums,target)<<endl;
    return 0;
}