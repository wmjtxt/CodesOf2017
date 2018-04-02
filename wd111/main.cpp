#include <iostream>

using namespace std;

int fun(int mm){
    if(mm <= 2) return 1;
    else return fun(mm-1) + fun(mm-2);
}

int main()
{
    for(int i = 1; i < 20; i++) cout << fun(i) << " ";
    return 0;
}
