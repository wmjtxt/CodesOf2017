#include <iostream>

using namespace std;

int main()
{
    int i, j, k, cnt = 0;
    for(i = 1; i < 5; i++)
      for(j = 1; j < 5; j++)
        for(k = 1; k < 5; k++){
          if(i != k && i != j && j != k){
              cout << i << j << k <<endl;
              cnt++;
          }
        }
    cout << cnt << endl;
    return 0;
}
