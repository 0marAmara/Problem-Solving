#include <iostream>
#include <vector>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector <int> result;
    for(int i=0;i<temperatures.size();i++){
        int j=i+1;
        while(j<temperatures.size()){
            if(temperatures[j]>temperatures[i]){
                result.push_back(j-i);
                break;
            }
            j++;
        }
        if(j==temperatures.size()){
            result.push_back(0);
        }
    }
    return result;
}

int main() {
    vector<int> temperatures={73,74,75,71,69,72,76,73};
    vector<int> result=dailyTemperatures(temperatures);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}