#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, h = 0;
    for(i = 2; i <= 100; i++){
        for(j = 2; j < sqrt(i); j++){
            if(i%j == 0) break;
        }
        if(j > sqrt(i)){
            cout << setw(2) << i;
            h++;
            if(h%4 == 0) cout << "\n";
            else cout <<" ";
        }
    }
    return 0;
}
