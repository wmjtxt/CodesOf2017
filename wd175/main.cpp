#include <stdio.h>
main()
{
    int i,n;
    for(i=1; i<5; i++)
    {
        n=0;
        if(i!=1)
            n=n+1;
        if(i==3)
            n=n+1;
        if(i==4)
            n=n+1;
        if(i!=4)
            n=n+1;
        if(n==2)
            printf("zhu hao shi de shi:%c",64+i);
    }
}
