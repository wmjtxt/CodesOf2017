#include <iostream>

using namespace std;

int main()
{
    char a, b, c;
    for(c = 'x'; c <= 'z'; c++){
        if(c != 'x' && c != 'z'){
            for(a = 'x'; a <= 'z'; a++){
                if(a != c && a != 'x'){
                    for(b = 'x'; b <= 'z'; b++){
                        if(b != a && b != c)
                            cout << "a--" << a << " , b--" << b << " , c--" << c << endl;
                    }
                }
            }
        }
    }
    return 0;
}
