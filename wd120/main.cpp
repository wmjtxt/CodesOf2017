#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    double s, h;
    s = 100;
    h = s/2;
    //cout <<"i:"<<i<<" "<< s << " " << h << endl;
    while(++i <= 10){
        s += 2*h;
        h = h/2;
        //cout <<"i:"<< i <<" "<< s << " " << h << endl;
    }
    cout <<"i:"<<i-1<<", s="<< s << ", h=" << h << endl;
    return 0;
}
