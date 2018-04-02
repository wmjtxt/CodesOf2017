#include <stdio.h>
#include <stdlib.h>

void fun(char *a)
{
    char *b;
    b =(char *)malloc(2);
    b = "abaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    *a = b;
}

int main()
{
    char *c;
    c =(char *)malloc(22);
    c = "bba";
    fun(&c);
    printf("%s",c);
    return 0;
}
