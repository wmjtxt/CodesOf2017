#include <iostream>

using namespace std;

double fun(int n1){
    int i = 1;
    double s = 0;
    while(i <= n1){
        if(i%5 == 0 || i%9 == 0) s += 1.0/i;
        i++;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
