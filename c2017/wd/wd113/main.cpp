#include <iostream>

using namespace std;

int main()
{
    int a, b, c, h = 0;
    for(int i = 100; i <= 999; i++){
        a = i/100;//
        b = i/10%10;
        c = i%10;
        if(i == a*a*a + b*b*b + c*c*c){
            cout << i;
            h++;
            if(h%4 == 0) cout << endl;
            else cout << " ";
        }
    }
    return 0;
}
