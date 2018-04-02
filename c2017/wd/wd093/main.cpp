#include <iostream>

using namespace std;


double fun(double x, int n){
    double s = 1;
    int i,fac = 1;
    s += x/fac;
    for(i = 2; i <= n; i++){
        x *= x;
        fac *= i;
        s += x/fac;
    }
    return s;
}

int main()
{
    double x1;
    int n1;
    cin >> x1 >> n1;
    cout << fun(x1,n1) << endl;
    return 0;
}
