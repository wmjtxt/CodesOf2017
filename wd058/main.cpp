#include <iostream>

using namespace std;

double fun(int n){
    int i;
    int s = 0;
    for(i = 21; i < n; i++){
        if(i%3 == 0 && i%7 == 0) s += i;
    }
    double x = s;
    while(x*x > s) x-=0.01;
    return x;
}

int main()
{
    int n1;
    cin >> n1;
    cout << fun(n1) << endl;
    return 0;
}
