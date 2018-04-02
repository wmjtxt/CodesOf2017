#include <iostream>

using namespace std;

void fun(char *str){
    int i, len = -1, first = -1;  //first 指向第一个字母，同时代表前导*号的个数
    while(str[++len] != '\0');
    while(str[++first] =='*');
    for(i = 0; i < len; i++){
        if(str[i] != '*') str[first++] = str[i];   //用first记录新串
    }
    str[first] = '\0';
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
