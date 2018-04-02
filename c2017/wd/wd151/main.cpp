#include "stdio.h"
main()
{
    int a,b;
    a=066;
    b=a&7;
    printf("\40: The a & b(decimal) is %d \n",b);
    b&=0xC;
    printf("\40: The a & b(decimal) is %d \n",b);
}
