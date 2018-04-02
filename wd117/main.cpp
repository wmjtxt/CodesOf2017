#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char *str = new char[1000];
    gets(str);
    int i = 0, let = 0, spa = 0, dig = 0, oth = 0;
    while(str[i] != '\0'){
        if((str[i] >= 'A' && str[i] <= 'Z') ||(str[i] >= 'a' && str[i] <= 'z')) let++;
        else if(str[i] == ' ') spa++;
        else if(str[i] >= '0' && str[i] <= '9') dig++;
        else oth++;
        i++;
    }
    cout << "The number of letter is " << let << endl;
    cout << "The number of space is " << spa << endl;
    cout << "The number of digit is " << dig << endl;
    cout << "The number of other character is " << oth << endl;
    return 0;
}
