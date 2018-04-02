#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char a[100];
    int len = -1;
    gets(a);
    while(a[++len] != '\0');
    cout << len << endl;
    return 0;
}
