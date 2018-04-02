#include <iostream>

using namespace std;

double fun(double xx){
    double bn = 0.5, an = 0.5*xx, sn = 1.0;
    int fac = 1, i = 1;
    sn += an;
    double z;
    if(an < 0) z = -an;
    else z = an;
    while(z >= 0.000001){
        fac *= i+1;
        bn = (double)bn*(0.5-i);
        xx *= xx;
        an = (double)bn/fac*xx ;
        sn += an;
        if(an < 0) z = -an;
        else z = an;
        i++;
    }
    //cout << z << endl;
    return sn;
}

int main()
{
    double x;
    cin >> x;
    cout << fun(x) << endl;
    return 0;
}
