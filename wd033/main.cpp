#include <iostream>
#include <string.h>
#define n 5

using namespace std;

char* fun(char *s){
    //cout << s << endl;
    int i, j, len = strlen(s), cnt = 0;
    char *s1 = new char[100];
    for(i = len-1; i >= 0; i--){//�Ӻ���ǰ
        if(s[i] == '*') cnt++;  //������β�м���*
        else break;
    }
    if(cnt <= n) s1 = s;
    else{
        for(j = 0; j <= i+cnt-n; j++) s1[j] = s[j]; //len-(i+cnt-n)�Ǵ�β�����*����
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
