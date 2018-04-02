#include <iostream>

using namespace std;

struct S{
    int id;
    int score1;
    int score2;
    int score3;
    int score4;
    int score5;
    int score6;
    int score7;
    int score8;
    double ave;
};

void fun(S &a){
    a.ave = (double)(a.score1 + a.score2 + a.score3 + a.score4
           + a.score5 + a.score6 + a.score7 + a.score8)/8;
}

int main()
{
    S aa;
    cin >> aa.id;
    cin >> aa.score1 >> aa.score2 >> aa.score3 >> aa.score4
        >> aa.score5 >> aa.score6 >> aa.score7 >> aa.score8;
    fun(aa);
    cout << aa.ave << endl;
    return 0;
}
