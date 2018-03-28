#include <stdio.h>
#include <stdlib.h>
#define n 5
int fun(int a[][n]){
    int i, j;
    int sum = 0;
    if(n == 1) return a[0][0];
    for(i = 0; i < n; i++){
        if(i == 0 || i == n-1){
            for(j = 0; j < n; j++){
                sum += a[i][j];
            }
        }
        else{
            sum += (a[i][0] + a[i][n-1]);
        }
    }
    return sum;
}

int main()
{
    int b[n][n];
    int i, j;
    int s;
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
    s = fun(b);
    printf("%d\n",s);
    return 0;
}
