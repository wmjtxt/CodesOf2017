#include <iostream>
#include <stdio.h>
using namespace std;

void fun(char *p1, char *p2){
    int len1 = 0, len2 = 0;
    while(p1[len1] != '\0') len1++;
    while(p2[len2] != '\0') len2++;
    for(int i = 0; i < len2; i++){
        p1[len1+i] = p2[i];
    }
    len1 += len2;
    p1[len1] = '\0';
}

int main()
{
    char *pp1, *pp2;
    pp1 = new char[100];
    pp2 = new char[100];
    gets(pp1);
    gets(pp2);
    fun(pp1,pp2);
    cout << pp1 << endl;
    delete [] pp1;
    delete [] pp2;
    return 0;
}
