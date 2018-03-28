#include <iostream>

using namespace std;

int fun(int a[],int m){
    int i, j;
    for(i = 1, j = 0; i <= m; i++){
        if(i%7 == 0 || i%11 == 0){
            a[j++] = i;
        }
    }
    return j;
}

int main()
{
    int m, n;
    cin >> m;
    int a[m], i;
    n = fun(a,m);
    cout << n << endl;
    for(i = 0; i < n-1; i++)
        cout << a[i] << " ";
    cout << a[n-1] << endl;
    return 0;
}
