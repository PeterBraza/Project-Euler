#include <iostream>
using namespace std;
int main(){
    for(unsigned long int i = 1; i < 999999999999; i++){
        //2, 4, 5, and ten are factors of 20- no need to put them
        //9 is a factor of 18, as well as 3, no need to put 9 or 3 as well
        //8 is a factor of 16, no need to put 8 and sixteen
        //7 is a factor of 14, no need to put 7 and 14
        if(i % 20 == 0 && i % 19 == 0 && i % 18 == 0 && i % 17 == 0 && i % 16 == 0 && i % 15 == 0 && i % 14 == 0 && i % 13 == 0 && i % 12 == 0 && i % 11 == 0){
            cout << i << "\n";
            return 0;
        }
    }
}
