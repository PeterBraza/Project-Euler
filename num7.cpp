#include <iostream>
#include <cmath>
using namespace std;
bool isprime(long long int num){
    int squirt = sqrt(num) + 1;
    if(num % 2 == 0){
        return false;
        return 0;
    }
    for(int i = 3; i<squirt; i+=2){
        if(num % i == 0){
            return false;
            return 0;
        }
    }
    return true;
}
int main(){
    int primearr[999999];
    int a = 0;
    for(int i = 0; i < 9999999; i++){
        if(isprime(i) == true){
            primearr[a] = i;
            a++;
        }
    }
    cout << primearr[10000] << "\n";
}
