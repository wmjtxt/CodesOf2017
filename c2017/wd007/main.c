#include <stdio.h>
#include <stdlib.h>
#define dsize 100

int fun(int *s,int t,int *k)
{
    int max = 0, i;
    for(i = 0; i < t; i++){
        if(s[i] > max){
            max = s[i];
            *k = i;
        }
    }
}

int main()
{
    int *ss, tt, *kk;
    int i;
    ss = (int *)malloc(sizeof(int)*dsize);
    kk = (int *)malloc(sizeof(int)*dsize);
    scanf("%d",&tt);
    for(i = 0; i < tt; i++) scanf("%d",&ss[i]);
    fun(ss,tt,kk);
    printf("%d\n",*kk);
    //free(ss);
    //free(kk);
    return 0;
}
