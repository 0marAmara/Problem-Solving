#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    for(auto str : strs){
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        mp[sortedStr].push_back(str);
    }
    vector<vector<string>> result;
    for(auto it : mp){
        result.push_back(it.second);
    }
    return result;

}

int main() {
    vector<string> strs;
    strs.push_back("eat");
    strs.push_back("tea");
    strs.push_back("tan");
    strs.push_back("ate");
    strs.push_back("nat");
    strs.push_back("bat");
    vector<vector<string>> result = groupAnagrams(strs);
    for(auto vec : result){
        for(auto str : vec){
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}