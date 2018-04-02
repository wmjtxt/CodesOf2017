#include <stdio.h>
#include <stdlib.h>

double fun(int n)
{
    //printf("%d\n",n);
    double s = 0.0, m = 0.0;
    double i;
    for(i = 1; i <= n; i++){
        m += i;
        s += (1/m);
    }
    return s;
}

int main()
{
    int n;
    double ss;
    scanf("%d",&n);
    ss = fun(n);
    printf("%.2f\n",ss);
    return 0;
}
