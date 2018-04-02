#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void fun(char *s, char *t){
    //cout << s << endl;cout << t << endl;
    int i, j = 0;
    for(i = 0; i < strlen(s); i++){
        if(s[i]%2 != 0) t[j++] = s[i];
    }
    t[j] = '\0';
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

