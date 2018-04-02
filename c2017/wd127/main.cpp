#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    void rev(int n);
    rev(5);
    return 0;
}

void rev(int n){
    char c;
    if(n <= 1){
        c = getchar();
        putchar(c);
    }
    else{
        c = getchar();
        rev(n-1);
        putchar(c);
    }
}
