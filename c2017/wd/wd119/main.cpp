#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i, j, s;
    for(i = 1; i <= 1000; i++){
        s = 0;
        j = 1;
        while(j < i){
            if(i%j == 0){
                s += j;
            }
            j++;
        }
        if(s == i) cout << s << "\n";
    }
    return 0;
}
