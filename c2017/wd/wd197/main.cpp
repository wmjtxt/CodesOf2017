#include "stdio.h"
main()
{
    FILE *fp;
    char ch,filename[10];
    scanf("%s",filename);
    if((fp=fopen(filename,"w"))==NULL)
    {
        printf("cannot open file\n");
        //10exit(1);
    }
    ch=getchar();
    ch=getchar();
    while(ch!='#')
    {
        fputc(ch,fp);
        putchar(ch);
        ch=getchar();
    }
    fclose(fp);
}
