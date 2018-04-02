#include <iostream>
#include <stdio.h>
using namespace std;

void fun(char *s, int &n, int &h, int &e){
    //cout << s << endl;
    int i = 0;
    n = h = 0;
    while(s[n] != '\0'){
        n++;
    }
    while(s[h] == '*'){
        h++;
    }
    e = n;
    while(s[e-1] == '*'){
        e--;
    }
    e = n - e;
    for(i = 0; i < n-h-e; i++) s[i] = s[i+h];
    s[i] = '\0';
}

int main()
{
    char *ss = new char[100];
    int n, h, e;
    gets(ss);
    fun(ss, n, h, e);
    cout << ss << " " << n << " " << h << " " << e << endl;
    delete [] ss;
    return 0;
}
