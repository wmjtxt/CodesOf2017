#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int i, j, cnt = 0, h = 0;
    for(i = 101; i <= 1000; i++){
        for(j = 2; j < sqrt(i); j++){
            if(i%j == 0) break;
        }
        if(j > sqrt(i)){
            cout << setw(4) << i;
            h++;
            if(h%5 == 0) cout << "\n";
            else cout << " ";
            cnt++;
        }
    }
    cout << "\n" << setw(4) << cnt << endl;
    return 0;
}
