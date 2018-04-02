#include <iostream>
#include <math.h>
using namespace std;

int fun(int mm, int xx[]){
    int i, j, kk = 0;
    xx[0] = 1;
    kk++;
    for(i = 2; i <= mm; i++){
        for(j = 2; j <= sqrt(i); j++){
            if(i%j == 0){
                xx[kk++] = i;
                break;
            }
        }
    }
    return kk;
}

int main()
{
    int m, k, i, *a;
    a = new int[100];
    cin >> m;
    k = fun(m,a);
    cout << k << endl;
    for(i = 0; i < k-1; i++) cout << a[i] << " ";
    cout << a[k-1] << endl;
    delete [] a;
    return 0;
}
