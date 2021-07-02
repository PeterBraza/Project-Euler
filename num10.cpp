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
    int totalsum = 0;
    for(int i = 0; i < 2000000; i++){
        if(isprime(i) == true){
            cout << i << "\n";
            totalsum+=i;
        }
    }
    cout << totalsum << "\n";
}
