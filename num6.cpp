#include <iostream>
using namespace std;
int main(){
    //because I'm different, I know the total sum of all natural numbers of 100 is 5050
    int squared = 5050 * 5050;
    int squaresum = 0;
    for(int i = 0; i < 101; i++){
        squaresum += (i * i);
    }
    cout << squared - squaresum << "\n";
}
