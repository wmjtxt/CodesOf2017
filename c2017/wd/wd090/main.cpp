#include <iostream>

using namespace std;

double fun(int n){
    int i = 1;
    double sn = 0;
    while(i <= n){
        sn += (double)1/(2*i-1)-(double)1/(2*i);
        i++;
    }
    return sn;
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
