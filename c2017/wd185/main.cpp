#include <stdio.h>
#include <math.h>
int main() // 一开始没看明白这题在说啥，运行后，输入11出来99，才明白。。。
{
    long int m9=9,sum=9;
    int zi,n1=1,c9=1;
    scanf("%d",&zi);// 没有判断是否是素数
    for(int i = 2; i <= sqrt(zi); i++) if(zi%i == 0) return 0;
    if(zi <= 2) return 0;      //2需要排除
    while(n1!=0)
    {
        if(!(sum%zi))
            n1=0;           //结束条件
        else
        {
            m9=m9*10;
            sum=sum+m9;
            c9++;
        }
    }
    printf("%ld,can be divided by %d \"9\"",sum,c9);
}
