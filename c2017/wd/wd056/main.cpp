#include <iostream>

using namespace std;

void fun(char *s,char *p){
    //cout << s << endl;
    int i = 0, j = 0, len = 0, index; //index is p's index
    while(s[len] != '\0') len++;
    index = len;
    while(s[index-1] == '*') index--; //�Ӻ���ǰ����
    //cout << cnt << endl;
    *p = s[index-1];  //pָ�����ĸ
    for(i = 0; i < index; i++){
        if(s[i] != '*') s[j++] = s[i]; //��ĸ����
    }
    for(;i < len; i++) s[j++] = s[i];  //β��*��
    s[j] = '\0';  //������־
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
