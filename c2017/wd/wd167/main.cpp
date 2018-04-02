#include <iostream>

using namespace std;

int main()
{
    int a[10] = {2,1,9,5,24,100,18,0,3,17};
    int i, j, k, m = a[0], n = a[9];
    for(i = 0; i < 10; i++){
        if(a[i] > m){
            m = a[i];
            j = i;
        }
        if(a[i] < n){
            n = a[i];
            k = i;
        }
    }
    int tmp = a[j];a[j] = a[0];a[0] = tmp;
    tmp = a[k];a[k] = a[9];a[9] = tmp;
    for(i = 0; i < 9; i++){
        cout << a[i] << " ";
    }
    cout << a[9] << endl;
    return 0;
}
