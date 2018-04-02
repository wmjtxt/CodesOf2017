#include <stdio.h>
#include <stdlib.h>
#define m 50

int fun(int a[]){
    int i, j;
    for(i = 1, j = 0; i <= 100; i++){
        if(i%7 == 0 || i%11 == 0){
            if(i%7 == 0 && i%11 == 0) continue;
            else a[j++] = i;
        }
    }
    return j;
}

int main()
{
    int a[m], n;
    int i;
    n = fun(a);
    printf("%d\n",n);
    for(i = 0; i < n-1; i++)
        printf("%d ", a[i]);
    printf("%d\n", a[n-1]);
    return 0;
}
