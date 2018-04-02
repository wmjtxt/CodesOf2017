#include <stdio.h>
#include <stdlib.h>

int fun(int score[], int n, int below[]){
    double ave = 0.0;
    int i, j;
    for(i = 0; i < n; i++){
        ave += score[i];
    }
    ave = ave/n;
    j = 0;
    for(i = 0; i < n; i++){
        if(score[i] < ave){
            below[j++] = score[i];
        }
    }
    return j;
}

int main()
{
    int m;
    int i;
    scanf("%d",&m);
    int score[m];
    int below[m];
    for(i = 0; i < m; i++){
        scanf("%d",&score[i]);
    }
    int res = fun(score, m, below);
    printf("%d\n",res);
    for(i = 0; i < res-1; i++)
        printf("%d ",below[i]);
    printf("%d\n",below[res-1]);
    return 0;
}
