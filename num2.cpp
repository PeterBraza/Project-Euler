#include <iostream>
using namespace std;
int main(){
    unsigned long long int a = 0;
    int evensum = 0;
    //iter for iterations
    int iter = 2;
    //"arr" is for making the fibonacci numbers
    int arr[9999];
    //"fib" is for storing the fibonacci numbers
    int fib[999];
    arr[0] = 1;
    arr[1] = 2;
    cout << arr[1] << "\n";
    while(a < 4000000){
        a = arr[iter-1] + arr[iter-2];
        arr[iter] = a;
        iter++;
        //cout << a << "\n";
        if(a % 2 == 0){
            evensum+=a;
        }
    }
    cout << evensum+2 << "\n";
}
