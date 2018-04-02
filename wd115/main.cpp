#include <iostream>

using namespace std;

int main()
{
    int grade;
    cin >> grade;
    char c;
    if(grade >= 90) c = 'A';
    else if(grade >=60) c = 'B';
    else c = 'C';
    cout << c << endl;
    return 0;
}
