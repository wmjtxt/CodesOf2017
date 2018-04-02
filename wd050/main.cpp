#include <iostream>

using namespace std;

struct S{
    int id;
    int score;
};

void fun(S s[5], S &m){
    for(int i = 0; i < 5; i++){ //Ã°ÅÝÅÅÐò£¬°¡Ë¤£¬Ð´³ÉÁËÑ¡ÔñÅÅÐò¡£¡£¡£
        for(int j = i+1; j < 5; j++){
            if(s[i].score < s[j].score){
                S tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
            //else s[i] = s[j];
        }
        //for(int i = 0; i < 5; i++) cout << s[i].id << " " << s[i].score << endl;cout << endl;
    }
    m = s[0];
}

int main()
{
    S ss[5] = {{1,60},{2,90},{3,80},{4,50},{5,70}};
    S ma;
    for(int i = 0; i < 5; i++) cout << ss[i].id << " " << ss[i].score << endl;cout << endl;
    fun(ss,ma);
    //for(int i = 0; i < 5; i++) cout << ss[i].id << " " << ss[i].score << endl;
    cout << ma.id << " " << ma.score << endl;
    return 0;
}
