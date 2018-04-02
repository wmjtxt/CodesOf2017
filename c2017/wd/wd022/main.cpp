#include <iostream>
#define n 5
using namespace std;

int fun(int *h){
    int i;
    for(i = 1; i <= n; i++){
        if(h[0] < h[i]) h[0] = h[i];
    }
    return h[0];
}

int main()
{
    int *hh = new int(n+1);
    int m, i;
    hh[0] = 0;
    for(i = 1; i <= n; i++) cin >> hh[i];
    m = fun(hh);
    cout << m << endl;
    return 0;
}
