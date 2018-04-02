#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxsize 100
#define lsize 26

void fun(char *tt,int pp[])
{
    //printf("%s\n",tt);
    int len = strlen(tt);printf("%d\n",len);
    int i, j;
    for(i = 0; i < len; i++){
        for(j = 0; j < lsize; j++){
            if(tt[i] - 97 == j){
                pp[j]++;
            }
        }
    }
}

int main()
{
    int i;
    char *t;
    t = (char *)malloc(sizeof(char)*maxsize);
    int *pp;
    pp = (int *)malloc(sizeof(int)*lsize);
    for(i = 0; i < lsize; i++) pp[i] = 0;
    scanf("%s",t);
    //printf("%s\n",t);
    fun(t,pp);
    for(i = 0; i < lsize; i++) printf("%c:%d ",i+97,pp[i]);
    return 0;
}
