#include <iostream>

using namespace std;

int main()
{
    float i = 1, n = 1, s = 0;
    while(i <= 20){
        n *= i;
        s += n;
        i++;
        cout << s << endl;
    }
    cout << s << endl;
    return 0;
}
