#include <iostream>
#include <string.h>
#include <time.h>
#include<conio.h>
using namespace std;
int movecount = 0;

void Hanoi(int n, string A, string B, string C){
  if(n == 1){
    //cout <<"Move top disk from peg " << A << " to peg " << C << endl;
    movecount++;
  }
  else{
    Hanoi(n-1, A, C, B);
    //cout <<"Move top disk from peg " << A << " to peg " << C << endl;
    movecount++;
    Hanoi(n-1, B, A, C);
  }
}
int main()
{

    while(1){
    movecount = 0;
    int n;
    string A = "��A", B = "��B", C = "��C";
    cout << "��������Ҫ�ƶ��Ľ�����:";cin >> n;
    Hanoi(n, A, B, C);
    cout << '\n' << "*************************************" << '\n' <<endl;
    cout << n << "�����̹����ƶ�����Ϊ��" << movecount <<endl;
    /*time_t stime, etime;
    time(&stime);
    getch();
    time(&etime);
    cout << "��ʱ��" << etime - stime << "ms" <<endl;
    getch();*/
}
}
