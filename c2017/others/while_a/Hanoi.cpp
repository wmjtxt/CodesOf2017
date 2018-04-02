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
    string A = "塔A", B = "塔B", C = "塔C";
    cout << "请输入需要移动的金盘数:";cin >> n;
    Hanoi(n, A, B, C);
    cout << '\n' << "*************************************" << '\n' <<endl;
    cout << n << "个金盘共需移动次数为：" << movecount <<endl;
    /*time_t stime, etime;
    time(&stime);
    getch();
    time(&etime);
    cout << "耗时：" << etime - stime << "ms" <<endl;
    getch();*/
}
}
