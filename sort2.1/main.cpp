#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    int buf[100];
    while(cin >> n){
      for(int i = 0; i < n; i++)
      cin >> buf[i];
    for (int i = 0; i < n;i++){
      for(int j = 0;j < n-1-i;j++){
        if(buf[j] > buf[j+1]){
          int tmp = buf[j];
          buf[j] = buf[j+1];
          buf[j+1] = tmp;
        }
      }
    }
    for (int i = 0;i < n;i++){
      cout << buf[i] <<" ";
    }
    cout <<endl;
    }
    return 0;
}
