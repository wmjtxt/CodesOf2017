#include <iostream>

using namespace std;

int main()
{
    int i, j, a[10] = {0};
    a[0] = 1;
    for(i = 0; i < 10; i++){
        cout << a[0];
        for(j = i; j > 0; j--){
            a[j] = a[j-1] + a[j]; //����������̫������
        }
        for(j = 1; j <= i; j++){
            cout << " " << a[j];  //������һ��ʼ�Ǵ�ǰ������㣬ǰ���ֵ�ͱ������ˣ�Ȼ��Ӻ���ǰ�㣬������ֿ����Ϳ����ˣ�
        }
        cout << endl;
    }
    return 0;
}
