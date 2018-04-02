#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i;
    while(cin >> n){i=2;
    cout << n << "=";
    while(i <= n){
        while(n%i == 0){
            n /= i;
            if(n >= i) cout << i << "*";
            else break;
        }
        i++;
    }
    cout << i-n << "\n";}
    return 0;
}
