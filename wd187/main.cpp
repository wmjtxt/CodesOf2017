#include "stdio.h"

struct student
{
    int x;
    char c;
} a;

f(student &b)
{
    b.x=20;
    b.c='y';
}

main()
{
    a.x=3;
    a.c='a';
    f(a);
    printf("%d,%c",a.x,a.c);
}
