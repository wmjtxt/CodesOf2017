#include <iostream>

using namespace std;

int main()
{
    int n, a[4], s, i;
    cin >> n;
    a[0] = n/1000;
    a[1] = n/100%10;
    a[2] = n%100/10;
    a[3] = n%10;
    for(i = 0; i < 4; i++){
        a[i] += 5;
        a[i] %= 10;
    }
    for(i = 0; i < 2; i++){
        int tmp = a[i];
        a[i] = a[3-i];
        a[3-i] = tmp;
    }
    for(i = 0; i < 4; i++) cout <<a[i];
    cout << endl;
    return 0;
}
