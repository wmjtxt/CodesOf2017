#include <iostream>
#define m 4
#define n 5
using namespace std;

void fun(char aa[m][n], char *ss){
    int i, j, k = 0;
    for(j = 0; j < n; j++){
        for(i = 0; i < m; i++){
            ss[k++] = aa[i][j];
        }
    }
    ss[k] = '\0';
}

int main()
{
    char a[m][n], *s, i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    s = new char[100];
    fun(a,s);
    cout << s << endl;
    return 0;
}
