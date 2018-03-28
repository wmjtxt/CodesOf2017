#include <iostream>

using namespace std;

double fun(){
    int i, an = 0;;
    double s = 0;
    for(i = 1; i <= 50; i++){
        an += i;
        s += 1.0/an;
    }
    return s;
}

int main()
{
    cout << fun() << endl;
    return 0;
}
