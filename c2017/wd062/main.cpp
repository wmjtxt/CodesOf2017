#include <iostream>
#include <stdio.h>

using namespace std;

int fun(char *s){
    int i, len = -1, cnt = 1, flag = 0;
    while(s[++len] != '\0');      //Çó×Ö·û´®³¤¶È
    for(i = 0; i < len; i++){
        if(s[i] == ' ' && flag == 0) flag = 1;
        if(s[i] >= 'a' && s[i] <= 'z' && flag == 1){
            cnt++;
            flag = 0;
        }
    }
    return cnt;
}

int main()
{
    char *s = new char[100];
    gets(s);
    cout << fun(s) << endl;
    return 0;
}
