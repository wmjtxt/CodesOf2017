#include <stdio.h>
#include <stdlib.h>

unsigned fun(unsigned w)
{
    unsigned w1 = w;
    int n = 1;
    w1 /= 10;
    while(w1 != 0){
        w1 /= 10;
        n *= 10;
    }
    //printf("%d\n",n);
    w %= n;
    return w;
}

int main()
{
    unsigned ww;
    unsigned www;
    scanf("%u",&ww);
    www = fun(ww);
    printf("%u\n",www);
    return 0;
}
