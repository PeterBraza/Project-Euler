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
    long long int a = 600851475143;
    for(long long int i = 1; i < sqrt(600851475143); i++){
        if(a % i == 0 && (isprime(i) == true)){
            cout << i << "\n";
        }
    }
}
