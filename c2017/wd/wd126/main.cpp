#include <iostream>

using namespace std;

int f(int n){
    if(n == 0 || n == 1) return 1;
    else return f(n-1)*n;
}

int main()
{
    int s;
    cin >> s;
    cout << f(s) << endl;
    return 0;
}
