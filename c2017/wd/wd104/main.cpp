#include <iostream>

using namespace std;

int main()
{
    int year, month, day, d;
    cin >> year >> month >> day;
    int m[12] = {0,31,59,90,120,151,181,212,243,273,304,334};
    int flag = 0;
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0)) flag = 1;
    d = m[month-1] + day;
    if(flag && month > 2) d++;
    cout << d << endl;
    return 0;
}
