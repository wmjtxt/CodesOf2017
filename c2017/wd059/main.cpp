#include <iostream>
#include <stdio.h>
#define m 4
#define n 100
using namespace std;

void fun(char **s, int m1, char *str){
    int i, j, len = 0;
    //cout << m1 << endl;
    //for(i = 0; i < m1; i++) cout << s[i];
    for(i = 0; i < m1; i++){
        j = 0;
        while(s[i][j] != '\0'){
            //cout << s[i][j] << " ";
            str[len++] = s[i][j++];
            //j++;
            //len++;
        }
        //cout << "\n";
    }
    str[len] = '\0';
}

int main()
{
    int i;
    char *s1[m], *str1;
    for(i = 0; i < m; i++) s1[i] = new char[n];
    str1 = new char[m*n+1];
    //str1 = NULL;
    for(i = 0; i < m; i++) gets(s1[i]);
    fun(s1,m,str1);
    cout << "str:" << str1 << endl;
    return 0;
}
