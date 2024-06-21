#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>& height) {
    int left=0, right=height.size()-1;
    int area = 0;
    while(left < right) {
        area = max(area, min(height[left], height[right]) * (right - left));
        if(height[left] < height[right]) {
            left++;
        }
        else {
            right--;
        }
    }
    return area;
}
int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height) << endl;
    return 0;
}