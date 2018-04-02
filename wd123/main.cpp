#include <iostream>

using namespace std;

int main()
{
    int i, j, k;
    i = 0;
    while(i < 4){
        j = 0;
        while(j < 3-i){
            cout << '-';
            j++;
        }
        k = 0;
        while(k < 2*i+1){
            cout << '*';
            k++;
        }
        cout << endl;
        i++;
    }
    i--;
    while(i > 0){
        j = 0;
        while(j < 4-i){
            cout << '-';
            j++;
        }
        k = 0;
        while(k < 2*i-1){
            cout << '*';
            k++;
        }
        cout << endl;
        i--;
    }
    return 0;
}
