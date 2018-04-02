#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void fun(char *s, char *t){
    //cout << s << endl;cout << t << endl;
    int i, j;
    for(i = 0, j = 0; i < strlen(s); i+=2){
        if(s[i]%2 == 0) t[j++] = s[i];
    }
    i = j;
    /*while(t[i] != '\0'){//好像这里不对，碰巧结果对了而已
        t[i] = NULL;
        j++;
    }*/
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
