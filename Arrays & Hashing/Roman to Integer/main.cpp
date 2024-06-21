#include <iostream>
using namespace std;

int romanToInt(string s) {
    int result = 0;
    for (int i = 0; i < s.size(); ++i) {
        switch (s[i]) {
            case'M':
                result += 1000;
                break;
            case'D':
                if(i+1 < s.size() && s[i+1] == 'M'){
                    result += 900;
                    i++;
                }else{
                    result += 500;
                }
                break;
            case'C':
                switch (s[i+1]) {
                    case'M':
                        result += 900;
                        i++;
                        break;
                    case'D':
                        result += 400;
                        i++;
                        break;
                    default:
                        result += 100;
                        break;
                }
                break;
            case 'L':
                result += 50;
                break;
            case 'X':
                switch (s[i+1]) {
                    case'C':
                        result += 90;
                        i++;
                        break;
                    case'L':
                        result += 40;
                        i++;
                        break;
                    default:
                        result += 10;
                        break;
                }
                break;
            case 'V':
                result += 5;
                break;
            case 'I':
                switch (s[i+1]) {
                    case'X':
                        result += 9;
                        i++;
                        break;
                    case'V':
                        result += 4;
                        i++;
                        break;
                    default:
                        result += 1;
                        break;
                }
                break;
        }
    }
    return result;
}

int main() {
    string x="III",y="LVIII",z="MCMXCIV";
    cout<<romanToInt(x)<<endl;
    cout<<romanToInt(y)<<endl;
    cout<<romanToInt(z)<<endl;


    return 0;
}