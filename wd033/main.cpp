#include <iostream>
#include <string.h>
#define n 5

using namespace std;

char* fun(char *s){
    //cout << s << endl;
    int i, j, len = strlen(s), cnt = 0;
    char *s1 = new char[100];
    for(i = len-1; i >= 0; i--){//从后往前
        if(s[i] == '*') cnt++;  //数出串尾有几个*
        else break;
    }
    if(cnt <= n) s1 = s;
    else{
        for(j = 0; j <= i+cnt-n; j++) s1[j] = s[j]; //len-(i+cnt-n)是串尾多余的*数量
        s1[j] = '\0';
    }
    return s1;
    delete [] s1;
}

int main()
{
    char *ss = new char[100];
    cin >> ss;
    ss = fun(ss);
    cout << ss << endl;
    delete [] ss;
    return 0;
}
