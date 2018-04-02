#include <iostream>

using namespace std;

double fun(int n){
    double s = 0;
    int i = 1;
    while(i <= n){
        s += (double)1/(i*(i+1));
        i++;
    }
    return s;
}

int main()
{
    int nn;
    cin >> nn;
    cout << fun(nn) << endl;
    return 0;
}
