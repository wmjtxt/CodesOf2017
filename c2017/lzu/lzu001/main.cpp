#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[100], b[100];
    cin >> a;
    int n;
    int i, j, k;
    n = strlen(a);
    k = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++){
            if(a[j] == a[i]) break;
        }
        if(j == i){
            b[k] = a[j];
            k++;
        }
    }
    for(i = 0; i < k; i++) cout << b[i];
    return 0;
}
