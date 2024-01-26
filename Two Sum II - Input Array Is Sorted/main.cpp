#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> result(2);
    int left=0,right=numbers.size()-1;
    while(left<right){
        if(numbers[left]+numbers[right]==target){
            result[0]=left+1;
            result[1]=(right+1);
            break;
        }
        else if(numbers[left]+numbers[right]<target){
            left++;
        }
        else{
            right--;
        }
    }
    return result;
}
int main() {
    vector<int> numbers={2,7,11,15};
    int target=9;
    vector<int> result=twoSum(numbers,target);
    cout<<result[0]<<" "<<result[1]<<endl;
    return 0;
}