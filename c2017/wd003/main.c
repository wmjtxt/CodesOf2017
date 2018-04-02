#include <stdio.h>
#include <stdlib.h>

void fun(int x,int pp[],int *n){
    int i, j;
    for(i = 1, j = 0; i < x; i+=2){
        if(x%i == 0){
            pp[j++] = i;
        }
    }
    *n = j;
}

int main()
{
    int x;
    scanf("%d",&x);
    int pp[x];
    int n;
    fun(x,pp,&n);
    printf("%d\n",n);
    int i;
    for(i = 0; i < n-1; i++){
        printf("%d ", pp[i]);
    }
    printf("%d\n",pp[n-1]);
    return 0;
}
