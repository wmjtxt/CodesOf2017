#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define defaultsize 100

void fun(int m,int k,int xx[])
{
    //printf("%d %d\n",m,k);
    int i, j, n;
    for(i = m+1, n = 0; k > 0; i++){
        for(j = 2; j <= sqrt(i); j++){
            if(i%j == 0) break;
        }
        if(j > sqrt(i)){
            xx[n++] = i;
            k--;
        }
    }
    //printf("%d\n",n);
    for(i = 0; i < n-1; i++) printf("%d ", xx[i]);
    printf("%d ", xx[n-1]);
}

int main()
{
    int m, k, *xx;
    xx = (int *)malloc(sizeof(int)*defaultsize);
    scanf("%d%d",&m,&k);
    fun(m,k,xx);
    return 0;
}
