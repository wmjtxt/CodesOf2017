#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 7;
    while(cin >> n){
        if(n >= 1 && n <= 50){
            for(int i = 0; i < n; i++) cout << "*";
            cout << endl;
            cnt--;
            if(cnt == 0) return 0;
        }
        else return 0;
    }
}
