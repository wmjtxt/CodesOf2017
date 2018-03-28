#include "stdio.h"
#include "conio.h"
int a,b,c;   //external
void add()
{
    int a;
    a=3;
    c=a+b;
}
main()
{
    a=b=4;//a,b一起赋值4
    add();//a在调用add时重新赋值3,b不变,仍为4
    printf("The value of c is equal to %d\n",c);
    getch();
}
