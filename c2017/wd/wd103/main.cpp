#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    int a, b, c;
    for(x = 1; x < 10000; x++){
        a = sqrt(x+100);
        b = sqrt(x+268);
        if(a*a == x+100 && b*b == x+268) cout << x << endl;
    }
    return 0;
}
