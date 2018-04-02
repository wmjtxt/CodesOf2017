#include <iostream>

using namespace std;

int fun(int a, int b){
    int c[4],cc = 0;
    c[1] = a/10;
    c[3] = a%10;
    c[0] = b/10;
    c[2] = b%10;
    for(int i = 0; i < 4; i++){
        cc *= 10;
        cc += c[i];
    }
    return cc;
}

int main()
{
    int aa, bb;
    cin >> aa >> bb;
    cout << fun(aa,bb) << endl;
    return 0;
}
