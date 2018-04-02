#include <iostream>

using namespace std;

int main()
{
    int i, j, k, cnt = 4, s = 4;
    for(i = 2; i <= 8; i++){
        //i = 2;
        if(i <= 2) s *= 7;
        else s *= 8;
        cnt += s;
    }
    cout << cnt << endl;
    return 0;
}
