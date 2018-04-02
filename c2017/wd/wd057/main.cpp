#include <iostream>
#define n 5
using namespace std;

struct Stu{
    int id;
    int score;
};

int fun(Stu s[], int low, int high, Stu *b){
    int i,cnt = 0;
    for(i = 0; i < n; i++){
        if(s[i].score >= low && s[i].score <= high){
            b[cnt++] = s[i];
        }
    }
    return cnt;
}

int main()
{
    Stu *b1 = new Stu[n], s1[n] = {{1,66},{2,78},{3,60},{4,80},{5,99}};
    int low1, high1, cnt1, i;
    cin >> low1 >> high1;
    cnt1 = fun(s1,low1,high1,b1);
    cout << cnt1 << endl;
    for(i = 0; i < cnt1; i++) cout << b1[i].id << " " << b1[i].score << endl;
    return 0;
}
