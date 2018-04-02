#include <iostream>

using namespace std;

int main()
{
    int i = 0, a = 2, b = 1;
    double s;
    int tmp;
    s = (double)a/b;
    i++;
    while(i < 20){
        tmp = a;
        a = a + b;
        b = tmp;
        s += (double)a/b;
        i++;
    }
    cout << s << endl;
    return 0;
}
