#include <iostream>

using namespace std;

int main()
{
    int n, i, j = 0, k, m;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++) a[i] = i+1;
    for(i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    i = 0;
    while(i < n){  //
        k = 0;
        while(k < 2){
            if(a[j] == 0){
                j++;
                j %= n;
                continue;//wow
            }
            k++;
            j++;
            j %= n;
        }
        while(a[j] == 0){
            j++;
            j %= n;
        }
        cout << a[j] << " ";
        a[j] = 0;
        for(m = 0; m < n; m++) cout << a[m] << " ";cout << endl;
        j++;j %= n;
        i++;
    }
    return 0;
}
