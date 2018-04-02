#include <iostream>
#include <string.h>
#define dsize 100

using namespace std;

int fun(char *s){
    int i;
    int len = strlen(s);
    //float m = (float)len/2;cout << m << endl;
    for(i = 0; i < len/2; i++){
        if(s[i] != s[len-i-1]) return 0;
    }
    //if(i > m) return 1;
    return 1;
}

int main()
{
    char *ss;
    ss = new char(dsize);
    int b;
    cin >> ss;
    b = fun(ss);
    if(b == 1) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
