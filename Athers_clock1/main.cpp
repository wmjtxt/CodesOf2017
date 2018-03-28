#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
    float a,b;
    char c=':';
    for(;cin>>a>>c>>b;)
    {
        cout.precision(2);
        if(a>12)
            a=a-12;
        a=a*5;
        a=a+b*5/60;
        float c;
        if(a<b)
        {
            float f=a;
            a=b;
            b=f;
        }
        if(a-b<60-a+b)
            c=a-b;
        else if(a-b>60-a+b)
            c=60-a+b;
        cout<<fixed<<c*6<<endl;
    }
  return 0;
}
