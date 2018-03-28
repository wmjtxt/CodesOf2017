#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int c = 0;
        int i, j, k, m;
        int p[50000];
        p[0] = 2;
        k = 1;
        for(i = 3; i <= n; i++){
          m = sqrt(i);
          for(j = 2; j <= m; j++){
            if(i % j == 0) break;
            }
          if(j > m){
            p[k] = i;
            k++;
          }
        }
        for(i = 0; i < k; i++){
          if((p[i+1] - p[i]) == 2) c++;
        }
        cout << c;
    }
    return 0;
}
