#include <iostream>
#define n 10
using namespace std;

int* fun(int *aa, int p){
    int i, j = 0, *a1 = new int[n];
    for(i = p+1; i < n; i++) a1[j++] = aa[i];
    for(i = 0; i <= p; i++) a1[j++] = aa[i];
    //cout << j << endl;
    //for(i = 0; i < n-1; i++) cout << a1[i] << "--";cout << a1[n-1];cout << endl;
    return a1;
}

int main()
{
    int *a = new int[n];
    int i, p;
    for(i = 0; i < n; i++) cin >> a[i];
    cin >> p;
    //for(i = 0; i < n-1; i++) cout << a[i] << "-";cout << a[n-1];cout << endl;
    a = fun(a, p);
    for(i = 0; i < n-1; i++) cout << a[i] << " ";
    cout << a[n-1];
    cout << endl;
    return 0;
}
