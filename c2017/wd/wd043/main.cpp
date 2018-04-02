#include <iostream>
#include <stdio.h>
#include <string.h>
#define num 5
using namespace std;

void fun(char **s, char **max){
    int i, j, maxlen = 0, len[num] = {0};
    //for(i = 0; i < num; i++) cout << s[i];cout << endl;
    for(i = 0; i < num; i++){
        len[i] = strlen(s[i]);
    }
    //for(i = 0; i < j; i++) cout << len[i] << "-";
    for(i = 0; i < num; i++){
        if(maxlen < len[i]){
            maxlen = len[i];
            j = i;
        }
    }
    //cout << j << " " << maxlen << endl;
    //for(i = 0; i < 4; i++) s[j][i+maxlen] = '*';
    *max = s[j];
    //cout << "max:" << *max << endl;
}

int main()
{
    char **ss = new char*[100], *m;
    int i;
    m = new char[100];
    for(i = 0; i < num; i++) ss[i] = new char[100];
    for(i = 0; i < num; i++) gets(ss[i]);
    fun(ss,&m);
    cout << m << endl;
    //for(i = 0; i < num; i++) delete [] ss[i];
    //delete [] ss;
    return 0;
}
