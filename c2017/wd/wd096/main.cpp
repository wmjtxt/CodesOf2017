#include <iostream>
#include <math.h>
using namespace std;

double fun(int ar[]){
    int i;
    double ave, s = 0;
    for(i = 0; i < 8; i++){
        ave = (double)(ar[i]+ar[i+1])/2;
        s += sqrt(ave);
    }
    return s;
}

int main()
{
    int a[9] = {3,5,8,10,9,32,99,52,68};
    cout << fun(a) << endl;
    return 0;
}
