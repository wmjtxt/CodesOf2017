#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n/10000 == n%10 && n%10000/1000 == n%100/10) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
