#include <stdio.h>
#include <stdlib.h>
#define dsize 100
void fun(char a[],char b[],int n)
{
    int i, j;
    int alen = strlen(a);
    for(i = 0, j = 0; i < alen; i++){
        if(i != n) b[j++] = a[i];
    }
    //b[j] = NULL;
    //printf("%s\n",b);
    for(i = 0; i < j; i++) printf("%c",b[i]);
}

int main()
{
    int *a, *b, n;
    a = (char *)malloc(sizeof(char)*dsize);
    b = (char *)malloc(sizeof(char)*dsize);
    scanf("%s%d",a,&n);
    fun(a,b,n);
    //printf("%s\n",b);
    return 0;
}
