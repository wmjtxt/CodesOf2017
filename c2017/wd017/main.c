#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define defaultsize 100
//×Ö·û´®ÄæÖÃ

void fun(char *s){
    char tmp;
    int i, len = strlen(s);
    for(i = 0; i < len/2; i++){
        tmp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = tmp;
    }
}

int main()
{
    char *ss;
    ss = (char *)malloc(sizeof(char)*defaultsize);
    scanf("%s",ss);
    fun(ss);
    printf("%s\n",ss);
    free(ss);
    return 0;
}
