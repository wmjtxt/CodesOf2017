#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    clrscr();/*��������*/
    textbackground(2);
    gotoxy(1, 5);/*��λ����*/
    cprintf("Output at row 5 column 1\n");
    textbackground(3);
    gotoxy(20, 10);
    cprintf("Output at row 10 column 20\n");
    getch();
}
