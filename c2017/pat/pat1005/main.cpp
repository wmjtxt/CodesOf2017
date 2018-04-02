#include <iostream>

using namespace std;

bool iskeynum(int a[], int num, int n){
    int i, j, k, t;
    int b[10000];
    i = 0, j = 0;
    while(n--){
        t = a[i];
        if(t != num){
            while(t != 2){
                if(t % 2 == 0){
                    t = t / 2;
                    b[j] = t;
                    j++;
                }
                else {
                    t = (3 * t + 1) / 2;
                    b[j] = t;
                    j++;
                }
            }
        }
        i++;
    }
    int flag = 1;
    for(k = 0; k < j; k++){
        if(b[k] == num) {
            flag = 0;
        }
    }
    if(flag == 0) return false;
    else return true;
}



int main()
{
    int n, i, j, k;
    int a[100];
    int c[100];
    while(cin >> n){
      for(i = 0; i < n; i++){
          cin >> a[i];
      }
      j = 0;
      for(i = 0; i < n; i++){
        if(iskeynum(a, a[i], n)){
          c[j] = a[i];
          j++;
        }
      }
      for(i = j - 1; i >= 0; i--){
          for(k = 0; k < i; k++){
              if(c[k] < c[k+1]){
                  int temp = c[k+1];
                  c[k+1] = c[k];
                  c[k] = temp;
              }
          }
      }
      for(i = 0; i < j - 1; i++){
        cout << c[i] << " ";
      }
      cout << c[j-1];
    }
    return 0;
}
