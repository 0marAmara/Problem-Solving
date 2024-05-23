#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto word:strs){
            string tmp=word;
            std::sort(tmp.begin(), tmp.end());
            mp[tmp].push_back(word);
        }
        vector<vector<string>>output;
        for(auto list:mp){
            output.push_back(list.second);
        }
        return output;
    }
};


int main(){

    vector<string> strs={"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution s;
    vector<vector<string>> result;
    result = s.groupAnagrams(strs);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}