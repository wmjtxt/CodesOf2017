#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char *s[]= {"man","woman","girl","boy","sister"};
    char **q;
    int k;
    for(k=0; k<5; k++)
    {
        q = &s[k];/*������дʲô���*///
        printf("%s\n",*q);
    }
}
