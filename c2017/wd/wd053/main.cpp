#include <iostream>
#include <iomanip>
#define n 3
using namespace std;

void fun(int a[][n], int b[][n]){
    //int b[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            b[i][j] = a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int tmp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tmp;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            b[i][j] += a[i][j];
        }
    }
    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << setw(3) << b[i][j] << " ";
        }
        cout << endl;
    }*/
}

int main()
{
    int aa[n][n]= {{1,2,1},{4,5,4},{7,8,7}};
    int bb[n][n];
    fun(aa,bb);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << setw(3) << bb[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
