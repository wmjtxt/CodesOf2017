#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(void)
{
    int color;
    for(color = 0; color < 8; color++){
        textbackground(color);/*设置文本的背景颜色*/
        cout << "This is color \r\n" << color;
        cout << "Press any key to continue\r\n";
        getch();/*输入字符看不见*/
    }
}
