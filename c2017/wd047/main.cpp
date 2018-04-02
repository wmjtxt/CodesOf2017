#include <iostream>
#include <string.h>
using namespace std;

void fun(char *ss){
    int len = strlen(ss);
    int i;
    for(i = 1; i < len; i+=2){
        if(ss[i] >= 'a' && ss[i] <= 'z') ss[i] += 'A'-'a';
    }
}

int main()
{
    char *s;
    s = new char[100];
    cin >> s;
    fun(s);
    cout << s << endl;
    delete [] s;
    return 0;
}
