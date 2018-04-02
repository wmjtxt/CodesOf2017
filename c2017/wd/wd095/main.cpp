#include <iostream>

using namespace std;

void fun(int n, char *str){
    int i = 0, j = 0;
    while(i < n && str[i] == '*'){
        if(str[i] == '*') i++;
    }
    j = i;
    while(str[i] == '*') i++;
    while(str[i] != '\0'){
        str[j] = str[i];
        i++;
        j++;
    }
    str[j] = '\0';
}

int main()
{
    char *s = new char[100];
    int n1;
    cin >> s >> n1;
    fun(n1,s);
    cout << s << endl;
    delete [] s;
    return 0;
}
