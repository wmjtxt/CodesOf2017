#include <iostream>

using namespace std;

int main()
{
    int p = 1, i = 10;
    //cout << "��" << i << "����" << p << "������\n";
    while(--i){
        p = 2 * (p + 1);
        //if(i>0) cout << "��" << i << "����" << p << "������\n";
    }
    cout << "��һ�칲ժ" << p << "������\n";
    return 0;
}
