#include <iostream>

using namespace std;

int main()
{
    int m, n, i;
    int gcd = 1, lcm;
    cin >> m >> n;
    i = 2;
    lcm = m*n;
    while(i <= m && i <= n){
        while(m%i == 0 && n%i == 0){
            m /= i;
            n /= i;
            gcd *= i;
        }
        i++;
    }
    lcm /= gcd;
    cout << "gcd = " << gcd <<"\nlcm = " << lcm << endl;
    return 0;
}
