#include <iostream>

using namespace std;

int main()
{
    void bubblesort02(int a[],int n,int &c,int &i);
    int n = 5;
    int a[n] = {4,5,1,3,2};
    int cc = 0, ii = 1;                             /*cc是比较次数，ii是冒泡趟数*/
    bubblesort02(a,n,cc,ii);
    for(int j = 0; j < n-1; j++){
    cout << a[j] << '<';
    }
    cout << a[n-1] << endl << cc << endl <<ii;
    return 0;
}

void bubblesort02(int a[],int n,int &c,int &i){
  c = 0;
  //e = 1;
  bool exchange;int j;
  for(i = 1; i < n; i++){
    exchange = false;
    for(j = n-1; j >= i; j--)
      if(a[j-1] > a[j])
        {
          int temp = a[j-1]; a[j-1] = a[j]; a[j] = temp;
          exchange = true;
          c++;
          }
    if(exchange == false) return;
  }
}
