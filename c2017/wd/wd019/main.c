#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define defaultsize 100

char* fun(char *s, char *c){
    char *s1;
    s1 = (char *)malloc(sizeof(char)*defaultsize);
    int len = strlen(s);
    int i, j;
    for(i = 0, j = 0; i < len; i++){
        if(s[i] != *c) s1[j++] = s[i];
    }
    return s1;
}

int main()
{
    char *ss, cc;
    ss = (char *)malloc(sizeof(char)*defaultsize);
    scanf("%s %c",ss,&cc);
    char *ccc;
    ccc = &cc;
    ss = fun(ss,ccc);
    printf("%s\n",ss);
    return 0;
}
