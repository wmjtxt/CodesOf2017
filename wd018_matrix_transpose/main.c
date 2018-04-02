#include <stdio.h>
#include <stdlib.h>
#define n 3

void fun(int a[][n]){
    int i, j;
    int tmp;
    if(n == 1) return a[0][0];
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            tmp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tmp;
        }
    }
}

int main()
{
    int b[n][n];
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            b[i][j] = rand()%9+1;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j != n-1) printf("%d ",b[i][j]);
            else printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    fun(b);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j != n-1) printf("%d ",b[i][j]);
            else printf("%d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
