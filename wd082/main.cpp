#include <iostream>
#define n 10
using namespace std;

double fun(double s[n]){
    double ave = 0;
    for(int i = 0; i < n; i++) ave +=s[i];
    ave /= n;
    return ave;
}

int main()
{
    double score[n];
    for(int i = 0; i < n; i++) cin >> score[i];
    cout << fun(score) << endl;
    return 0;
}
