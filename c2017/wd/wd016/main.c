#include <stdio.h>
#include <stdlib.h>

float fun(double h){
    double h1 = h;
    int h2, i;
    h1 *= 1000;
    h2 = (int)h1;
    i = h2%10;
    h2 /= 10;
    if(i >= 5) h2++;
    h = (double)h2/100;
    return h;
}

int main()
{
    double hh;
    scanf("%lf",&hh);
    hh = fun(hh);
    printf("%.2f",hh);
    return 0;
}
