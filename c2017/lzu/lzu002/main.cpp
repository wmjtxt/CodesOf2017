#include <iostream>
#include <string.h>
using namespace std;

int func(int t2,int n2,int a[]);


int main()
{
    int t, n;
    cin >> t >> n;
    char a[n];
    int b[n];
    int i, j, k = 0;
    cin >> a;
    int len = strlen(a);
    for(i = 0; i < len; i++){
        for(j = 0; j < i; j++){
            if(a[j] == a[i]) break;
        }
        if(j == i){
            b[k] = a[j] - '0';
            k++;
        }
    }
    //for(i = 0; i < k; i++) cout << b[i];cout << endl;
    for(i = 0; i < n; i++){
        if(a[i]-'0' == t) cout << a[i]-'0' << ",";
    }
    func(t,k,b);
    return 0;
}


int func(int t1, int n1, int a[]){
    int i, j, tt;
    for(i = 0; i < n1; i++){
        tt = t1;
        if(a[i] < tt){
            tt -= a[i];
            if(tt>t1/2) func(tt,n1,a);
            for(j = 0; j < n1; j++)
            {
                if(a[j] == tt)
                {
                    cout << a[i] << "+" << a[j] << ",";
                    break;
                }
            }
            if(j == n1){
                cout << a[i] << "+";
                func(tt,n1,a);
            }
        }
    }
    return 0;
}
