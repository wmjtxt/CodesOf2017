#include <stdio.h>
#include <stdlib.h>
#define m 3
#define n 5

void fun(int tt[m][n],int pp[n])
{
    int i, j;
    int tmp;
    for(j = 0; j < n; j++){
        tmp = tt[0][j];
        for(i = 1; i < m; i++){
            if(tmp > tt[i][j]) tmp = tt[i][j];
        }
        pp[j] = tmp;
    }
}

int main()
{
    int aa[m][n], p[n];
    int i, j;
    for(j = 0; j < n; j++) p[j] = 0;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            aa[i][j] = rand()%9+1;
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(j != n-1) printf("%d ",aa[i][j]);
            else printf("%d",aa[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    fun(aa,p);
    for(j = 0; j < n-1; j++) printf("%d ",p[j]);
    printf("%d\n",p[n-1]);
    return 0;
}
