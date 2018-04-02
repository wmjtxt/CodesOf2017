#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 100

int fun(int lim,int aa[max])
{
    int i, j, k = 0;
    for(i = 2; i <= lim; i++){
        for(j = 2; j < sqrt(i); j++){
            if(i%j == 0) break;
        }
        if(j > sqrt(i)) aa[k++] = i;
    }
    return k;
}

int main()
{
    int l, kk, a[max], i;
    scanf("%d",&l);
    for(i = 0; i < max; i++) a[i] = 0;
    kk = fun(l,a);
    printf("%d\n",kk);
    for(i = 0; i < kk-1; i++){
        printf("%d ",a[i]);
    }
    printf("%d\n",a[kk-1]);
    return 0;
}
