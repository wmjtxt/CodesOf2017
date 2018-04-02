#include <iostream>
#include <iomanip>
using namespace std;

struct S{
    int number;
    int score;
};

double fun(S s[], int &n, S *b){
    double ave;
    int i, j;
    for(int i = 0; i < n; i++) ave += s[i].score;
    ave /= n;
    for(i = 0, j = 0; i < n; i++){
        if(s[i].score >= ave) b[j++] = s[i];
    }
    n = j;
    return ave;
}

int main()
{
    int n1;
    cin >> n1;
    S s1[n1], *b1;
    b1 = new S[n1];
    double ave1;;
    for(int i = 0; i < n1; i++){
        cin >> s1[i].number >> s1[i].score;
    }
    ave1 = fun(s1,n1,b1);
    cout << "Average score :\n" << setprecision(2) << setiosflags(ios::fixed) << ave1 << endl;
    cout << "The students who's score \nis less than average :\n";
    for(int i = 0; i < n1; i++){
        cout << b1[i].number << " " << b1[i].score << endl;
    }
    //delete [] b1;
    return 0;
}
