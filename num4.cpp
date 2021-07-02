#include <iostream>
#include <string>
using namespace std;
bool ispalindrome(int num){
    string str = to_string(num);
   //cout << str << "\n";
    int len = str.length();
    string rev = "";
    for(int i = len-1; i >= 0; i--){
        rev = rev + str[i];
    }
   //cout << rev << "\n";
    if(str == rev){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int mult = 0;
    int high = 0;
    cout << ispalindrome(996004) << "\n";
    for(int i = 100; i < 999; i++){
        for(int j = 100; j < 999; j++){
            mult = i * j;
            if(ispalindrome(mult) == 1){
                if(mult > high){
                    high = mult;
                }
            }
        }
    }
    cout << high << "\n";
}
