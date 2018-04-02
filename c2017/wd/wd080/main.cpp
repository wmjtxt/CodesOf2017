#include <iostream>
#include <stdlib.h>
#include <iomanip>
#define n 5

using namespace std;

void fun(int a[][n],int m){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++){
            a[i][j] *= m;
        }
    }
}

int main()
{
    int aa[n][n], mm, i, j;
    cin >> mm;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            aa[i][j] = rand()%100+1;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << setw(4) << aa[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    fun(aa, mm);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << setw(4) << aa[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
