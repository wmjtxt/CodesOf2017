#include <iostream>

using namespace std;

int main()
{
    int num, d;
    cin >> num;
    if(num/10000 != 0) d = 5;
    else if(num/1000 != 0) d = 4;
    else if(num/100 != 0) d = 3;
    else if(num/10 != 0) d = 2;
    else d = 1;
    cout << d << endl;
    while(d--){
        cout << num%10;
        num /= 10;
    }
    return 0;
}
