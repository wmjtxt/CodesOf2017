#include <iostream>

using namespace std;

int fun(int n){
    int i, sum = 0;
    for(i = 2; i < n; i++){
        if(n%i == 0) sum += i;
    }
    return sum;
}

int main()
{
    int n1;
    cin >> n1;
    cout << fun(n1) << endl;
    return 0;
}
