#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

double fun(int a[]){
    double ave = 0, sum = 0;
    for(int i = 0; i < 10; i++) sum += a[i];
    ave = (double)sum/10;
    sum = 0;
    for(int i = 0; i < 10; i++) sum += (double)(a[i]-ave)*(a[i]-ave);
    return sum/10;
}

int main()
{
    int aa[10];
    for(int i = 0; i < 10; i++) cin >> aa[i];
    cout <<setprecision(2)<<setiosflags(ios::fixed)<< fun(aa) << endl;
    return 0;
}
