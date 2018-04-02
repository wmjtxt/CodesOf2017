#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char a[100], b[100];
    gets(a);
    gets(b);
    int lena = -1, i = 0;
    while(a[++lena] != '\0');
    while(b[i] != '\0'){
        a[lena++] = b[i++];
    }
    a[lena] = '\0';
    cout << a << endl;
    return 0;
}
