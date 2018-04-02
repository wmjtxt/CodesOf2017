#include <iostream>

using namespace std;

int main()
{
    int a[100] = {1,5,6,10,12,19,22,32,46,49};
    int n, i, j;
    cin >> n;
    if(n > a[9]) a[10] = n;
    else{
        for(i = 0; i < 10; i++){
            if(n < a[i]) break;
        }
        for(j = 9; j >= i; j--){
            a[j+1] = a[j];
        }
        a[i] = n;
    }
    for(int i = 0; i < 11; i++){
        cout << a[i] << " ";
    }
    return 0;
}
