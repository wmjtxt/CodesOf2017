#include <iostream>
#define n 10
using namespace std;

int* fun(int *aa, int mm){
    int i, j = 0, *a1 = new int[n];
    for(i = mm; i < n; i++) a1[j++] = aa[i];//
    for(i = 0; i < mm; i++) a1[j++] = aa[i];//
    //cout << j << endl;
    //for(i = 0; i < n-1; i++) cout << a1[i] << "--";cout << a1[n-1];cout << endl;
    return a1;
    delete [] a1;
}

int main()
{
    int *a = new int[n];
    int i, m;
    for(i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    //for(i = 0; i < n-1; i++) cout << a[i] << "-";cout << a[n-1];cout << endl;
    a = fun(a, m);
    for(i = 0; i < n-1; i++) cout << a[i] << " ";
    cout << a[n-1];
    cout << endl;
    delete [] a;
    return 0;
}
