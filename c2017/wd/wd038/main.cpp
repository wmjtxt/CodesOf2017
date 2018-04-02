#include <iostream>
#include <string.h>
using namespace std;

int fun(char *s, char c){
    int cnt = 0, i;
    for(i = 0; i < strlen(s); i++){
        if(s[i] == c) cnt++;
    }
    return cnt;
}

int main()
{
    char cc, *ss = new char[100];
    cin >> ss >> cc;
    cout << fun(ss,cc) << endl;
    return 0;
}
