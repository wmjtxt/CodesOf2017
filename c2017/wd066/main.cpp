#include <iostream>
#include <stdio.h>

using namespace std;

void fun(char *s){
    int i, j = 0, len = -1;
    while(s[++len] != '\0');
    for(i = 0; i < len; i++){
        if(s[i] != '*') s[j++] = s[i];
    }
    s[j] = '\0';
}

int main()
{
    char *s1 = new char[100];
    gets(s1);
    fun(s1);
    cout << s1 << endl;
    delete [] s1;
    return 0;
}
