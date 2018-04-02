#include <iostream>
#include <string.h>
using namespace std;

void fun(char *s){
    int len = strlen(s);
    int i;
    for(i = 1; i < len; i+=2){
        if(s[i] >= 'a' && s[i] <= 'z') s[i] += 'A'-'a';
    }
}

int main()
{
    char *ss;
    ss = new char[100];
    cin >> ss;
    fun(ss);
    cout << ss << endl;
    delete [] ss;
    return 0;
}
