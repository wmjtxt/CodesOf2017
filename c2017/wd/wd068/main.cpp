#include <iostream>

using namespace std;

double fun(int n){
    int i, j, fn;
    double sn = 1.0;
    for(i = 1; i <= n; ++i){
        j = fn = 1;
        while(j <= i){
            fn *= j++;
        }
        sn += (double)1/fn;
    }
    //cout << fn << "-" << endl;
    return sn;
}

int main()
{
    int nn;
    cin >> nn;
    cout << fun(nn) << endl;
    return 0;
}
