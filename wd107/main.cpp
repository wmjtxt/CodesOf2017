#include <iostream>
#include <stdio.h>
#include "conio.h"
using namespace std;

int main(){
    char a=16,b=44; //显示不出来
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    getch();
    return 0;
}
