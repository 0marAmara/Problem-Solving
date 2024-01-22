#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> output;
    map<int,int> freqMap;
    multimap<int,int> freqMap2;
    for(int i = 0; i < nums.size(); i++){
        freqMap[nums[i]]++;
    }
    for(auto it=freqMap.begin(); it!=freqMap.end(); ++it){
        freqMap2.insert(make_pair(it->second, it->first));
    }
    int i = 0;
    for(auto it=freqMap2.rbegin(); it!=freqMap2.rend()&&i<k; ++it){
        output.push_back(it->second);
        i++;
    }

    return output;
}

int main() {
//Input: nums = [1,1,1,2,2,3], k = 2
    vector<int> nums = {4,1,-1,2,-1,2,3};
    int k = 2;
    vector<int> output= topKFrequent(nums, k);
    for(int i = 0; i < output.size(); i++){
        cout << output[i] << " ";
    }
    return 0;
}