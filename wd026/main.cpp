#include <iostream>
#include <iomanip>
using namespace std;

double fun(double d){
    int n = 1;
    double x = 0, x1 = 1, x2 = 1;
    while(x1/x2 > d){
        x += x1/x2;
        x1 *= n;
        x2 *= (2*n+1);
        n++;
    }
    x *= 2;
    return x;
}

int main()
{
    double d;
    cin >> d;
    cout << setprecision(4) << setiosflags(ios::fixed) << fun(d) << endl;
    return 0;
}
