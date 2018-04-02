#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char* fun(char *s){
    //cout << s << endl;
    int i, j;
    char *s1 = new char[100];
    for(i = 0, j = 0; i < strlen(s); i++){
        if(s[i] != ' ') s1[j++] = s[i];
    }
    s[j] = '\0';
    return s1;
    delete [] s1;
}

int main()
{
    char *ss = new char[100];
    gets(ss);
    cout << fun(ss) << endl;
    delete [] ss;
    return 0;
}
