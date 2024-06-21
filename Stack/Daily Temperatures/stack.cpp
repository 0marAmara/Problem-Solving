#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    stack<pair<int,int>> s;
    vector<int> answer(temperatures.size());
    s.push({temperatures[temperatures.size()-1],0});
    answer[temperatures.size()-1]=0;
    for (int i = temperatures.size()-2; i >=0 ; --i) {
        int count=1;
        while(!s.empty() && s.top().first<=temperatures[i]){
            count+=s.top().second;
            s.pop();
        }
        if(!s.empty()){
            answer[i]=count;
        }else{
            answer[i]=0;
        }
        s.push({temperatures[i],count});
    }
    return answer;
}

int main() {
    vector<int> temperatures={73,74,75,71,69,72,76,73};
    vector<int> result=dailyTemperatures(temperatures);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}