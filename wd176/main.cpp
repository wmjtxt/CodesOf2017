#include <iostream>

using namespace std;

double fun(int num){
    double res = 0;
    if(num%2 == 0){
        for(int i = 2; i <= num; i+=2){
            res += 1.0/i;
        }
        cout << "1/2 + 1/4 + ... + 1/" << num << " = ";
    }
    else{
        for(int i = 1; i < num; i++){
            res += 1.0/i;
        }
        cout << "1/1 + 1/3 + ... + 1/" << num << " = ";
    }
    return res;
}


int main()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
