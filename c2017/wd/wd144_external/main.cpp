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
    a=b=4;//a,bһ��ֵ4
    add();//a�ڵ���addʱ���¸�ֵ3,b����,��Ϊ4
    printf("The value of c is equal to %d\n",c);
    getch();
}
