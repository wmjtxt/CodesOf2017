#include <iostream>
#include <string.h>
#define N 5
using namespace std;

typedef struct Student{
    char id[5];
    int score;
}Student;

Student fun(Student s[], char str[]){
    int i;
    //for(i = 0; i < N; i++) cout << s[i].id << endl;cout <<"\n";
    //cout << str<< endl;
    for(i = 0; i < N; i++){
        if(!(strcmp(s[i].id,str))){
            return s[i];
        }
    }
    Student ret;
    ret.id[0] = '\0';
    ret.score = -1;
    return ret;
}

int main()
{
    Student ss[N] = {{"0001",90},{"0002",60},{"0003",80},{"0004",75},{"0005",89}};
    char str1[5];
    cin >> str1;
    cout << fun(ss,str1).id << " " << fun(ss,str1).score << endl;
    delete [] str1;
    return 0;
}
