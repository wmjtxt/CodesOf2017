#include <iostream>

using namespace std;

int main()
{
    int i, j, a[10] = {0};
    a[0] = 1;
    for(i = 0; i < 10; i++){
        cout << a[0];
        for(j = i; j > 0; j--){
            a[j] = a[j-1] + a[j]; //哈哈哈，我太聪明了
        }
        for(j = 1; j <= i; j++){
            cout << " " << a[j];  //哈哈，一开始是从前往后计算，前面的值就被覆盖了，然后从后往前算，跟输出分开，就可以了，
        }
        cout << endl;
    }
    return 0;
}
