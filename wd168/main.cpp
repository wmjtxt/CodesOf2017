#include <iostream>

using namespace std;

void rev(int a[], int low, int high){
    int i, tmp;
    for(i = low; i < (low+high+1)/2; i++){
        tmp = a[i];a[i] = a[low+high-i];a[low+high-i] = tmp;
    }
}

int main()
{
    int m, n;
    cout << "Please input n : ";
    cin >> n;
    int a[n], i, tmp;
    cout << "Please input int array : ";
    for(i = 0; i < n; i++) cin >> a[i];
    cout << "Please input m : ";
    cin >> m;
    rev(a,0,n-m-1);
    rev(a,n-m,n-1);
    rev(a,0,n-1);
    cout << "The result array is : ";
    for(i = 0; i < n-1; i++) cout << a[i] << " ";
    cout << a[n-1] << endl;
    return 0;
}
