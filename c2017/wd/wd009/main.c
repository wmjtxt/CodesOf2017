#include <stdio.h>
#include <stdlib.h>

int fun(int m, int n){
    int i;
    int mm = 1, nn = 1, mn = 1;
    for(i = 1; i <= m; i++){
        mm *= i;
    }
    for(i = 1; i <= n; i++){
        nn *= i;
    }
    for(i = 1; i <= m-n; i++){
        mn *= i;
    }
    i = mm/(nn*mn);
    return i;
}

int main()
{
    int p, m1, n1;
    scanf("%d%d",&m1,&n1);
    if(m1 <= n1) return 0;
    p = fun(m1,n1);
    printf("%d\n",p);
    return 0;
}
