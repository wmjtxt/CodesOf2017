#include <iostream>

using namespace std;

int main()
{
    int a[3][3], h = 0, sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j];
            h++;
            if(h%3 == 0) cout << endl;
            else cout << " ";
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j) sum += a[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}
