#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size(),col=matrix[0].size(),left=0,right=row*col-1,mid;
    while(left<=right){
        mid=left+(right-left)/2;
        if(matrix[mid/col][mid%col]==target) return true;
        else if(matrix[mid/col][mid%col]<target) left=mid+1;
        else right=mid-1;
    }
    return false;
}

int main() {
    vector<vector<int>> matrix={ { 1, 1 }};
    int target=2;
    cout<<searchMatrix(matrix,target)<<endl;
    return 0;
}