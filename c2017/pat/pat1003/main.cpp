#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        char* str[n];
        for(int i = 0; i < n; i++)
            str[i] = new char[100];
        for(int i = 0; i < n; i++)
            cin >> str[i];
        for(int i = 0; i < n; i++){
            int num_left = 0, num_center = 0, num_right = 0;
            int num_A = 0, num_P = 0, num_T = 0;
            int flag = 1;
            int len = strlen(str[i]);
            for(int j = 0; j < len; j++){
                if(str[i][j] != 'P' && str[i][j] != 'A' && str[i][j] != 'T'){
                    flag = 0;
                    break;
                }
                if(str[i][j] == 'A'){
                    ++num_A;
                }
                else if(str[i][j] == 'P'){
                    ++num_P;
                }
                else if(str[i][j] == 'T'){
                    ++num_T;
                }
            }
            if(flag == 0 || num_P != 1 || num_T != 1 || num_A < 1){
                cout << "NO" << endl;
                continue;
            }
            int flag2 = 0;
            if(str[i][0] == 'P' && str[i][1] == 'A' && str[i][2] == 'T'){
              flag2 = 1;    //排除APT,PTA等
            }
            if(num_A == 1 && flag2 != 1){
                cout << "NO" << endl;
                continue;
            }
            int k;
            //求P左侧'A'的数目
            for(k = 0; k < len; ++k){
                if(str[i][k] == 'A'){
                    ++num_left;
                }
                else if(str[i][k] == 'P'){
                    break;
                }
            }
            //求P,T中间'A'的数目
            for(k += 1; k < len; ++k){
                if(str[i][k] == 'A'){
                    ++num_center;
                }
                else if(str[i][k] == 'T'){
                    break;
                }
            }
            //求T右侧'A'的数目
            for(k += 1; k < len; ++k){
                if(str[i][k] == 'A'){
                    ++num_right;
                }
                else if(str[i][k] == 'T'){
                    break;
                }
            }
            if(num_left * num_center == num_right){
                cout << "YES" << endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
