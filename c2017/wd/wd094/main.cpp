#include <iostream>

using namespace std;

void fun(char *str){
    int i, j = 0, len = -1, first = -1;  //first ָ���һ����ĸ��ͬʱ����ǰ��*�ŵĸ���
    while(str[++len] != '\0');
    while(str[++first] =='*');
    for(i = first; i < len; i++) str[j++] = str[i];
    str[j] = '\0';
}

int main()
{
    char *s = new char[100];
    cin >> s;
    fun(s);
    cout << s << endl;
    delete [] s;
    return 0;
}
