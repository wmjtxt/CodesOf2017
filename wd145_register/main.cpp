#include "stdio.h"
#include "conio.h"
 main()
{
    register int i; //what??? ����ʲô��?
    int tmp=0;
    for(i=1; i<=100; i++)
        tmp+=i;
    printf("The sum is %d\n",tmp);
    getch();
}
