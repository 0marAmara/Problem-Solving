#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int left = 1,right = *max_element(piles.begin(), piles.end());
    while(left < right){
        int mid = left + (right - left) / 2;
        int hours = 0;
        for(int i = 0; i < piles.size(); i++){
            hours += piles[i] / mid + (piles[i] % mid ? 1 : 0);
        }
        if(hours <= h){
            right = mid;
        }
        else{
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    cout << minEatingSpeed(piles, h) << endl;
    return 0;
}