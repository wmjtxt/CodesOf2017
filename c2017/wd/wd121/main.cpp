#include <iostream>

using namespace std;

int main()
{
    int p = 1, i = 10;
    //cout << "第" << i << "天有" << p << "个桃子\n";
    while(--i){
        p = 2 * (p + 1);
        //if(i>0) cout << "第" << i << "天有" << p << "个桃子\n";
    }
    cout << "第一天共摘" << p << "个桃子\n";
    return 0;
}
