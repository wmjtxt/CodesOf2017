#include <iostream>

using namespace std;

int main()
{
    int n, a, a1, s = 0, i = 1;
    cin >> n >> a;
    cout <<a;
    s += a;
    a1 = a;
    while(i < n){
        a1 = a1*10 + a;
        cout <<"+"<< a1;
        s+=a1;
        i++;
    }
    cout <<"="<< s << endl;
    return 0;
}
