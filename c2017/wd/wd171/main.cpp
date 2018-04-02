#include <iostream>
#include <iomanip>
using namespace std;

struct student{
    char id[10];
    char name[30];
    int score[3];
}s[5];

input(){
    //student s[5];
    for(int i = 0; i < 5; i++){
        cout << "Please input id : ";
        cin >> s[i].id;
        cout << "Please input name : ";
        cin >> s[i].name;
        cout << "Please input score : ";
        for(int j = 0; j < 3; j++) cin >> s[i].score[j];
    }
}

output(){
    cout <<setw(4)<< "id" <<setw(8)<< "name" <<setw(8)<< "score1"<<setw(8)<< "score2"<<setw(8)<< "score3"<<endl;
    for(int i = 0; i < 5; i++){
        cout << setw(4) << s[i].id << setw(8)<< s[i].name;
        for(int j = 0; j < 3; j++) cout << setw(8) << s[i].score[j];
        cout << endl;
    }
}

int main()
{
    input();
    output();
    return 0;
}
