#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int fun(char *s1, char *s2){
    int i, cnt = 0;
    for(i = 0; i < strlen(s1)-1; i++){
        if(s1[i] == s2[0] && s1[i+1] == s2[1]) cnt++;
    }
    return cnt;
}

int main()
{
    char *ss1 = new char[100], *ss2 = new char[100];
    gets(ss1);
    gets(ss2);
    cout << fun(ss1,ss2) << endl;
    return 0;
}
