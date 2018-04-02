#include <iostream>

using namespace std;

int main()
{
    int target = 10, n = 10, count = 0;
    int *a = new int[n];
    for(int i = 0; i < n-1; i++)
      cin >> a[i];
    for(int i = 0; i < n-1; i++)
      for(int j = 0; j < i; j++){
        count++;
        if(a[i] + a[j] == target)
          cout << a[i] << a[j] << endl;
      }
      cout << count << endl;
    return 0;
}
