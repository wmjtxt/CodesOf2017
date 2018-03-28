#include <iostream>

using namespace std;

int main()
{
    int i, j, tmp, a[10];
    for(i = 0; i < 10; i++){
        cin >> a[i];
    }
    for(i = 0; i < 10; i++){
        for(j = i+1; j < 10; j++){
            if(a[i] > a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(i = 0; i < 9; i++){
        cout << a[i] << " ";
    }
    cout << a[9] << endl;
    return 0;
}
