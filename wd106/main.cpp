#include <iostream>

using namespace std;

int main()
{
    int n;
    for(int i = 1; i < 6; i++){
        if(i == 1 || i == 5) n = 6;
        else n = 1;
        while(n--) cout << "*";
        cout << endl;
    }
    return 0;
}
