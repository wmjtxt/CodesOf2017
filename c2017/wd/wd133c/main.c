#include "conio.h"
#include "stdio.h"
void main(void)
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
