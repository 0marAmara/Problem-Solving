#include <iostream>
#include <math.h>
using namespace std;

bool isPalindrome(int x);
int main() {
    int x;
    cin >> x;
    cout<<isPalindrome(x);
    return 0;
}

bool isPalindrome(int x){
    if(x>=0){
        int dig = 0, temp = x;
        while(temp){
            dig++;
            temp/=10;
        }
        for(int i =0;i<dig/2;i++){
            if(x/(int)pow(10,i)%10 != x/(int)pow(10,dig-i-1)%10){
                return false;
            }
        }
        return true;
    }
    return false;
}