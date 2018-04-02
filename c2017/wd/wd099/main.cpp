#include <iostream>
#include <math.h>
using namespace std;

bool isp(int n){
    int i;
    for(i = 2; i < sqrt(n); i++){
        if(n%i == 0) break;
    }
    if(i > sqrt(n)) return true;
    return false;
}

double fun(int n){
    int i = 3;
    double s = 0;
    while(i <= n){
        if(isp(i)) s += sqrt(i);
        i++;
    }
    return s;
}

int main()
{
    int n1;
    cin >> n1;
    //if(isp(n1)) cout << "True"<<endl;else cout << "False" <<endl;
    cout << fun(n1) << endl;
    return 0;
}
