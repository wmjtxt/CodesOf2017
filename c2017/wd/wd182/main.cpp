/*八进制转换成十进制*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    /*char oct[100];
    int dec = 0, i = 0;
    cin >> oct;
    while(oct[i] != '\0'){
        dec = dec*8 + oct[i]-'0';
        i++;
    }
    cout << dec << endl;*/
    char *p, s[6];
    int n = 0;
    p = s;
    cin >> p;
    while(*p != '\0'){
        n = n * 8 + *p - '0';
        p++;
    }
    cout << n << endl;
    return 0;
}
