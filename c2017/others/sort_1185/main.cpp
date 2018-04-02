#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int m = 0;
    int buf[1000];
    while(cin >> n){
      for(int i = 0; i < n; i++){
        cin >> buf[i];
      }
      if(n < 1 || n > 1000) continue;
      else if(n == 1){
        cout << buf[0] << "\n" << -1 << "\n";
      }
      else{
        for(int j = 0; j < n-1; j++){
          if(buf[j] > buf[j+1]){
            int tmp = buf[j];
            buf[j] = buf[j+1];
            buf[j+1] = tmp;
          }
        }
        m = buf[n-1];
        sort(buf,buf+n-1);
        cout << m << "\n";
        for(int i = 0; i < n-2; i++){
          cout << buf[i] << " ";
        }
        cout << buf[n-2] << "\n";
      }
   }
   return 0;
}
