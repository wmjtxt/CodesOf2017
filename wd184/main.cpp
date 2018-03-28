#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i, j, flag = 0;//2²»ÄÜ,23333
    cout << "Please input an even : ";
    cin >> n;
    for(i = 3; i < n; i+=2){
        for(j = 2; j < sqrt(i)||j< sqrt(n-i); j++){
            if(i%j == 0||(n-i)%j == 0) break;
        }
        if(j > sqrt(i)&&j> sqrt(n-i)){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "True" << endl;
        cout << n << " = " << i << " + " << n-i << endl;
    }
    return 0;
}
