#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void rev(char str[],int x, int y){
    int i;
    for(i = x; i < (x+y+1)/2; i++){
      char temp = str[i];
      str[i] = str[x+y-i];
      str[x+y-i] = temp;
    }
}


int main()
{
    char str[90];
    while(gets(str)){
      int i, j = 0;
      int n = strlen(str);
      for(i = 0; i < n; i++){
          if(str[i] == ' '){
            rev(str, j, i-1);
            j = i + 1;
          }
        }
      rev(str, j, n-1);
      rev(str, 0, n-1);
      cout << str;
    }
    return 0;
}
