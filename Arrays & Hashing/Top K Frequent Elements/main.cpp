#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> output;
        map<int,int> freqMap;
        set<pair<int,int>> st;
        for(auto num:nums){
            freqMap[num]++;
        }
        for (const auto &item: freqMap) {
            st.insert({item.second,item.first});
        }
        auto rIt=st.rbegin();
        for (int i=0;rIt!=st.rend(),i<k;rIt++,i++) {
            output.push_back(rIt->second);
        }
        return output;
    }
};


int main(){
    vector<int> nums = {1,1,1,2,2,2,2,3};
    int k = 2;
    Solution sol;
    sol.topKFrequent(nums, k);
}