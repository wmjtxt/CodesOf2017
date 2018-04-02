#include <iostream>

using namespace std;

void fun(char *s,char *p){
    //cout << s << endl;
    int i = 0, j = 0, len = 0, index; //index is p's index
    while(s[len] != '\0') len++;
    index = len;
    while(s[index-1] == '*') index--; //从后往前查找
    //cout << cnt << endl;
    *p = s[index-1];  //p指向该字母
    for(i = 0; i < index; i++){
        if(s[i] != '*') s[j++] = s[i]; //字母部分
    }
    for(;i < len; i++) s[j++] = s[i];  //尾部*号
    s[j] = '\0';  //结束标志
}

int main()
{
    char *ss = new char[100];
    char *p;
    cin >> ss;
    fun(ss,p);
    cout << *p <<'\n'<< ss << endl;
    delete [] ss;
    return 0;
}
