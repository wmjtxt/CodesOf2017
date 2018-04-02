#include <iostream>
#include <math.h>
using namespace std;

double fun(int m){
    int i;
    double s = 0;
    for(i = 1; i <= m; i++){
        s += log(i);
    }
    s /= 2;
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
