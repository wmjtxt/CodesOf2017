#include <iostream>

using namespace std;

int f(int n){
    if(n < 0) return -1;
    else if(n <= 1) return n;
    else return f(n-1)+f(n-2);
}

int fun(int tt){
    int i = -1;
    while(f(++i) <= tt);
    return f(i);
}

int main()
{
    int t;
    cin >> t;
    cout << fun(t) << endl;
    return 0;
}
