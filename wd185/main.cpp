#include <stdio.h>
#include <math.h>
int main() // һ��ʼû������������˵ɶ�����к�����11����99�������ס�����
{
    long int m9=9,sum=9;
    int zi,n1=1,c9=1;
    scanf("%d",&zi);// û���ж��Ƿ�������
    for(int i = 2; i <= sqrt(zi); i++) if(zi%i == 0) return 0;
    if(zi <= 2) return 0;      //2��Ҫ�ų�
    while(n1!=0)
    {
        if(!(sum%zi))
            n1=0;           //��������
        else
        {
            m9=m9*10;
            sum=sum+m9;
            c9++;
        }
    }
    printf("%ld,can be divided by %d \"9\"",sum,c9);
}
