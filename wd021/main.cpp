#include <iostream>
#include <string.h>
#include <algorithm>
#define dsize 100

using namespace std;

bool cmp(int a, int b){
    if(a != b) return a > b;
}

void fun(char *s1){
    int i, len = strlen(s1);
    int *s2 = new int(dsize);
    for(i = 0; i < len; i++) s2[i] = s1[i];
    sort(s2+1,s2+len-1,cmp);
    for(i = 0; i < len; i++) s1[i] = s2[i];
}

int main()
{
    char *s;
    s = new char(dsize);
    cin >> s;
    fun(s);
    cout << s << endl;
    return 0;
}
