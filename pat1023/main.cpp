#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int i;
    int cnt = 1;
    for(i = 0; i < 10; i++) cin >> a[i];
    for(i = 1; i < 10; i++){
        if(a[i] != 0){
            cout << i;
            a[i]--;
            break;
        }
        else cnt++;
    }
    if(a[0] != 0){
        while(a[0]--) cout << 0;
    }
    for(i = cnt; i < 10; i++){
        if(a[i] != 0){
            while(a[i]--){
                cout << i;
            }
        }
    }
    return 0;
}
