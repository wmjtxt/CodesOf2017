#include <iostream>

using namespace std;

int main()
{
    int n, s, m;
    cin >> n >> s >> m;
    int a[n];
    int i, j;
    int outsort;
    int mm, flag = 0;
    for(i = 0; i < n; i++) a[i] = i+1;
    outsort = (s+m-1)%n;
    cout << a[(outsort+n-1)%n] << "->";
    a[outsort-1] = 0;
    for(j = 0; j < n; j++){
        flag = 0;
        mm = m;
        while(mm--){
            if(a[outsort] != 0){
                outsort = (outsort+1)%n;
            }
            else{
                mm++;
                outsort = (outsort+1)%n;
            }
        }
        cout << a[(outsort+n-1)%n];
        a[(outsort+n-1)%n] = 0;
        for(i = 0; i < n; i++){
            if(a[i] != 0) {
                flag = 1;
                break;
            }
        }
        if(flag) cout << "=>";
    }
    return 0;
}
