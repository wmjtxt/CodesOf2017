#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fun(){
    double x0, x1 = 0.0;
    double z;
    x0 = x1;
    x1 = cos(x0);
    z = x0-x1;
    if(z < 0) z = -z;
    while(z >= 0.000001){
        z = x0-x1;
        if(z < 0) z = -z;
        x0 = x1;
        x1 = cos(x0);
    }
    return x1;
}

int main()
{
    double root;
    root = fun();
    printf("%f\n",root);
    return 0;
}
