#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int>& height) {
    int left[height.size()],right[height.size()],out=0;
    left[0]=height[0];
    right[height.size()-1]=height[height.size()-1];
    for (int i = 1; i < height.size(); ++i) {
        left[i]=max(left[i-1],height[i]);
        right[height.size()-i-1]=max(right[height.size()-i],height[height.size()-i-1]);
    }
    for(int i=0;i<height.size();i++){
        out+=min(left[i],right[i])-height[i];
    }
    return out;
}

int main() {
    vector<int> input={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(input);
    return 0;
}