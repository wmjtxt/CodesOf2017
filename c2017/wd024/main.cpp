#include <iostream>
#include <string.h>
#define dsize 100

using namespace std;

int fun(char *s){
    int res = 0, i;
    for(i = 0; i < strlen(s); i++){
        res = res*10 + (s[i]-48);
    }
    return res;
}

int main()
{
    char *ss;
    ss = new char(dsize);
    //cin >> ss;
    ss = "1234";
    cout << fun(ss) << endl;
    return 0;
}
