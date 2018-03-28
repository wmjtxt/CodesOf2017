#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a;
    char t;
    int h, m;
    while(cin >> h >> t >> m){
        if(h < 0 || h > 24 || m < 0 || m >= 60)cout << "³ö´í£¡" << endl;
        else {
          h = h%12;
          a = (5.00*h + m*1.00/12 - 1.00*m)*6;
          if(a < 0 )a = -a;
          if(a > 180.00)a = 360.00 - a;
          cout << setiosflags(ios::fixed)<< setprecision(2)
               << a <<endl;
        }
    }
    return 0;
}
