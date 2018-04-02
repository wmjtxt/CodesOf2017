#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void fun(char *s, char *t){
    //cout << s << endl;cout << t << endl;
    int i, j;
    for(i = 1, j = 0; i < strlen(s); i+=2){
        if(s[i]%2 == 1) t[j++] = s[i];
    }
    i = j;
    while(t[i] != '\0'){
        t[i] = NULL;
        j++;
    }
}

int main()
{
    char *ss, *tt;
    ss = new char[100];
    tt = new char[100];
    *tt = NULL;
    cin >> ss;
    fun(ss,tt);
    cout << tt;
    //system("PAUSE");
    cout << endl;
    delete [] ss;
    delete [] tt;
    return 0;
}
