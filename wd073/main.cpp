#include <iostream>
#include <stdio.h>
using namespace std;

void fun(char *s, int &f, int &p){
    //cout << s << endl;
    int i, j = 0, len = -1;
    while(s[++len] != '\0');
    f = -1;
    p = len;
    while(s[--p] == '*');   //p指向最后一个字母
    while(s[++f] == '*');   //f指向第一个字母
    //cout << len << " " << f << endl;
    j = f;
    for(i = f; i <= p; i++){
        if(s[i] != '*'){
            s[j] = s[i];
            j++;
        }
    }
    i = len-p;
    while(--i) s[j++] = '*';
    s[j] = '\0';
}

int main()
{
    char *ss = new char[100];
    int f, p;
    gets(ss);
    fun(ss, f, p);
    cout << ss << " " << f << " " << p << endl;
    delete [] ss;
    return 0;
}
