#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int a[2000], b[1000];
    int c[1000] = {0};
    char inp[4000];
    while(gets(inp)){
      int i = 0, j = 0, cou = 0, n = 0;
      int t, k, flag;
      int m[10];
      int len = strlen(inp);
      for(i = 0; i < len; i++){
          if(inp[i] != ' '){
              if(inp[i] == '-'){
                flag = 1;
              }
              else{
                  m[n] = inp[i] - '0';
                  cou++;
                  n++;
              }
          }
          else if(inp[i] == ' '){
              if(cou == 4){
                a[j] = 1000*m[0]+100*m[1]+10*m[2]+m[3];
                j++;
              }
              else if(cou == 3){
                a[j] = 100*m[0]+10*m[1]+m[2];
                j++;
              }
              else if(cou == 2){
                a[j] = 10*m[0]+m[1];
                j++;
              }
              else if(cou == 1){
                a[j] = m[0];
                j++;
              }
              if(flag == 1){
                a[j-1] = -a[j-1];
                flag = 0;
              }
              cou = 0;
              n = 0;
          }
      }
      if(cou != 0){
        if(cou == 4){
            a[j] = 1000*m[0]+100*m[1]+10*m[2]+m[3];
            j++;
        }
        else if(cou == 3){
            a[j] = 100*m[0]+10*m[1]+m[2];
            j++;
        }
        else if(cou == 2){
            a[j] = 10*m[0]+m[1];
            j++;
        }
        else if(cou == 1){
            a[j] = m[0];
            j++;
        }
        if(flag == 1){
            a[j-1] = -a[j-1];
            flag = 0;
        }
      }
      //cout << j<<endl;
      //for(i = 0; i < j; i++) cout << a[i] <<"/";
      t = a[1];

      /*for(i = 1; i < j; i = i + 2){
        k = a[i];
        c[k] = a[i-1];
      }
      //for(i = 0; i <= t; i++) cout << c[i]<<"-";*/
      if(t == 0) {
          cout << 0 << " " << 0 << endl;
      }
      else {
          for(i = 0; i < j; i+=2){
              if(a[i+1] != 0){
                a[i] = a[i] * a[i+1];
                a[i+1] = a[i+1] - 1;
              }
              else{
                a[i] = 0;
              }
          }
      if(a[i-4] !=0 && a[i-2] == 0) i-=2;
      //cout <<i;
      for(k = 0; k < i-1; k++) cout << a[k] << " ";
      cout << a[i-1] << endl;
      //for(i = 0; i < t; i++) cout << c[i]<<" ";
      //j = 0;
      //cout <<t;
      /*for(i = 0; i < t; i++){
          if(c[i] != 0){
            b[j] = i;
            b[j+1] = c[i];
            j = j + 2;
          }
      }
      for(i = j-1; i > 0; i--) cout << b[i] << " ";
      cout << b[0];
      break;*/
      }
    }
    return 0;
}
