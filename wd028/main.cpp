#include <iostream>

using namespace std;

void fun(int a1[], int n1, int &max1, int &index1){
    int i;
    max1 = 0;
    for(i = 0; i < n1; i++){
        if(max1 < a1[i]){
            max1 = a1[i];
            index1 = i;
        }
    }
}

int main()
{
    int *x, n, max, i, index;
    cin >> n;
    x = new int[n];
    for(i = 0; i < n; i++) cin >> x[i];
    fun(x, n, max, index);
    cout << "max = " << max << endl << "index : " <<  index << endl;
    return 0;
}
