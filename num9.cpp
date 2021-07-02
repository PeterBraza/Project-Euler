#include <iostream>
using namespace std;
int main(){
    //generating pythagorean triples: using arbitrary integers q and r,
    //a = q^2 - r^2, b = 2qr, c = q^2 + r^2
    for(int i = 2; i < 999; i++){
        for(int j = 1; j < 999; j++){
            int a = (i * i - j * j);
            int b = (2 * i * j);
            int c = i * i + j * j;
            if(a + b + c == 1000){
                cout << a << " " << b << " " << c << "\n";
            }
        }
    }
}
