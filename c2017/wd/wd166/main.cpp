#include <iostream>

using namespace std;

void swapf(int *p1, int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main()
{
    int a, b, c;
    int *pa, *pb, *pc;
    cin >> a >> b >> c;
    pa = &a;
    pb = &b;
    pc = &c;
    if(a > b) swapf(pa, pb);
    if(a > c) swapf(pa, pc);
    if(b > c) swapf(pb, pc);
    cout << a << " " << b << " " << c << endl;
    return 0;
}
