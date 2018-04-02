#include <iostream>
#include <stdlib.h>
#define N 10000
using namespace std;

void fun(int a[], int d[]){
    int i;
    for(i = 0; i < N; i++){
        if(a[i]/10 < 10)
            d[a[i]/10]++;
        else d[10]++;
    }
}

int main()
{
    int age[N], dd[11] = {0}, i;
    for(i = 0; i < N; i++){
        age[i] = rand()%125;
    }
    fun(age,dd);
    for(i = 0; i < N; i++) cout << age[i] << " ";cout << endl;
    for(i = 0; i < 11; i++) cout << dd[i] << " ";
    return 0;
}
