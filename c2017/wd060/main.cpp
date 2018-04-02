#include <iostream>

using namespace std;

int fun(int a[]){
    int i, j = 0;
    a[j++] = a[0];
    for(i = 0; i < 10; i++){
        //if(a[i] != a[i+1]) a[j++] = a[i+1]; //i < 9;
        if(a[j-1] != a[i]) a[j++] = a[i];
    }
    for(i = j; i < 10; i++) a[i] = 0;
    for(i = 0; i < j; i++) cout << a[i];cout << endl;
    return j;
}

int main()
{
    int a1[10] = {1,2,3,4,5,5,6,6,6,9};
    cout <<  fun(a1) << endl;
    return 0;
}
