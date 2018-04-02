#include <iostream>

using namespace std;

int main()
{
    int n;
    int a, b, c;
    int i;
    while(cin >> n){
        if((n / 100) % 10){
          a = (n / 100) % 10;
          for(i = 0; i < a; i++)
            cout << 'B';
          b = (n / 10) % 10;
          for(i = 0; i < b; i++)
            cout << 'S';
          c = n % 10;
          for(i = 0; i < c; i++)
            cout << i + 1;
        }
        else if((n / 10) % 10){
          b = (n / 10) % 10;
          for(i = 0; i < b; i++)
            cout << 'S';
          c = n % 10;
          for(i = 0; i < c; i++)
            cout << i + 1;
        }
        else if(n % 10){
          c = n % 10;
          for(i = 0; i < c; i++)
            cout << i + 1;
        }
    }
    return 0;
}
