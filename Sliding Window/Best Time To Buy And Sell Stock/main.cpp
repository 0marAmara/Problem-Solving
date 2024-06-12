#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrice=0,l=0,r=1;
        while(r<prices.size()){
            if(prices[r]-prices[l]<0)
                l++;
            else{
                maxPrice=max(maxPrice,prices[r]-prices[l]);
                r++;
            }
        }
        return maxPrice;
    }
};


int main(){
    vector<int> prices = {7,6,4,3,1};
    Solution s;
    cout << s.maxProfit(prices) << endl;
    return 0;
}