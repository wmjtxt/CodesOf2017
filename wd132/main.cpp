#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(void)
{
    int color;
    for(color = 0; color < 8; color++){
        textbackground(color);/*�����ı��ı�����ɫ*/
        cout << "This is color \r\n" << color;
        cout << "Press any key to continue\r\n";
        getch();/*�����ַ�������*/
    }
}
