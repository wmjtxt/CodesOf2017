#include "stdio.h"
#include "conio.h"
void hello_world(void)
{
printf("Hello, world!\n");
}
void three_hellos(void)
{
int counter;
for (counter = 1; counter <= 9; counter++)
hello_world();/*���ô˺���*/
}
void main(void)
{
three_hellos();/*���ô˺���*/
getch();
}
