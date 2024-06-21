#include <iostream>
#include <vector>
using namespace std;

void backtrack(int open,int close, int n,string str,vector<string> &result){
    if(open==0 && close==0){
        result.push_back(str);
        return;
    }
    if(open==0){
        str.push_back(')');
        backtrack(open,close-1,n,str,result);
        return;
    }
    if(open==close){
        str.push_back('(');
        backtrack(open-1,close,n,str,result);
    }
    else{
        string temp = str;
        str.push_back('(');
        temp.push_back(')');
        backtrack(open-1,close,n,str,result);
        backtrack(open,close-1,n,temp,result);
    }
}
vector<string> generateParenthesis(int n) {
    vector<string> result;
    backtrack(n,n,n,"",result);
    return result;

}

int main() {
    int n=8;
    vector<string> result = generateParenthesis(n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    return 0;
}