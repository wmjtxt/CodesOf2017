#define N 4
#include "stdio.h"
static struct man
{
    char name[20];
    int age;
} person[N]= {"li",18,"wang",19,"zhang",20,"sun",22};
main()
{
    struct man *q,*p;
    int i,m=0;
    p=&person[0];//
    for (i=0; i<N; i++)
    {
        if(m<p->age)
            q=p++;
        m=q->age;
    }
    //p--;*p++;*p--;p++;
    printf("%s,%d",(*p).name,(*p).age);
}
