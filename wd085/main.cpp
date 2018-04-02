#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct St{
    char id[11];
    int score;
    struct St *next;
}St;

double fun(St *h){
    double ave = 0;
    int cnt = 0;
    while(h->next != NULL){
        ave += h->next->score;
        h = h->next;
        cnt++;
    }
    if(cnt == 0) return 0;
    else{
        ave = (double) ave/cnt;
        return ave;
    }
}

int main()
{
    St cc = {"0003",99,NULL}, bb = {"0002",89,&cc}, aa = {"0001",83,&bb},hh = {"",-1,&aa};
    cout << fun(&hh) << endl;
    system("pause");
    return 0;
}
