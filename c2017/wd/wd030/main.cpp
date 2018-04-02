#include <iostream>
#define m 5
using namespace std;

int fun(int a[2][m]){
    int i, j, mx = 0;
    for(i = 0; i < 2; i++){
        for(j = 0; j < m; j++){
            if(mx < a[i][j])
              mx = a[i][j];
        }
    }
    return mx;
}

int main()
{
    int a[2][m], i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    cout << fun(a) << endl;
    return 0;
}
