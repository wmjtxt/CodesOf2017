#include <iostream>
#include <math.h>
using namespace std;

double fun(int n){
    int i;
    double a = 1,s = 1;
    for(i = 2; i <= n; i++){
        a += sqrt(i);
        s += a;
    }
    return s;
}

int main()
{
    int n1;
    cin >> n1;
    cout << fun(n1) << endl;
    return 0;
}
