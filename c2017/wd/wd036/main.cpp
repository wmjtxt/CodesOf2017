#include <iostream>
#include <string.h>

using namespace std;

char* fun(char *s){
    //cout << s << endl;
    int i, j, len = strlen(s), cnt = 0;
    char *s1 = new char[100];
    for(i = 0; i < len; i++){
        if(s[i] == '*') cnt++;  //计算前导*个数
        else break;
    }
    i = 0;
    for(j = cnt; j < len; j++) s1[i++] = s[j];
    for(j = 0; j < cnt; j++) s1[i++] = s[j]; //把前导*加到串尾
    s1[i] = '\0';
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
