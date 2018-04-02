#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 10

int fun(int a[][n]){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i > j) a[i][j] = 0;
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
