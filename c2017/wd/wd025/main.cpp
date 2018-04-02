#include <iostream>
#define dsize 100
using namespace std;

char* fun(char *a, char *b){
    int alen = 0, blen = 0;
    while(a[alen] != '\0'){
        alen++;
    }
    while(b[blen] != '\0'){
        blen++;
    }
    if(alen < blen) return b;
    else return a;
}

int main()
{
    char *aa, *bb;
    aa = new char(dsize);
    bb = new char(dsize);
    cin >> aa >> bb;
    cout << fun(aa,bb) << endl;
    return 0;
}
