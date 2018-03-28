#include <iostream>

using namespace std;

void fun(char *str){
    int i, len = -1, rear;
    while(str[++len] != '\0');
    rear = len;
    while(str[--rear] =='*');
    str[rear+1] = '\0';
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
