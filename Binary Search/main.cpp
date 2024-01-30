#include <iostream>
#include <vector>
using namespace std;

int bin_search(vector<int> arr,int left,int right,int target){
    if(left>right)
        return -1;
    int mid=(left+right)/2;
    if(arr[mid]==target)
        return mid;
    else if(arr[mid]>target)
        return bin_search(arr,left,mid-1,target);
    else
        return bin_search(arr,mid+1,right,target);
}

int search(vector<int>& nums, int target) {
    return bin_search(nums,0,nums.size()-1,target);
}

int main() {
    vector<int> nums={ -1, 0, 3, 5, 9, 12 };
    int target=9;
    cout<<search(nums,target)<<endl;
    return 0;
}