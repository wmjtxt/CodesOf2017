#include <iostream>
#include <stdlib.h>
#define M 4
#define N 5
using namespace std;

void fun(int a[M][N], int a1[M*N], int *p){
    int i, j, k = 0;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            a1[k++] = a[i][j];
        }
    }
    *p = k;
}

int main()
{
    int a[M][N], a1[M*N], cnt;
    int i, j, k = 1;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            a[i][j] = k;
            k++;
        }
    }
    fun(a,a1,&cnt);
    cout << cnt << endl;
    for(i = 0; i < cnt; i++){
        cout << a1[i];
        if(i == cnt-1) cout << endl;
        else cout << " ";
    }
    system("pause");
    return 0;
}
