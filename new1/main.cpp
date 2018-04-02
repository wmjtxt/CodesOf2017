#include <iostream>

using namespace std;

int main()
{
    /*int *p = new int[100];
    int e = 0;
    for(int i = 0; i <= 5; i++)p[i] = e++;
    for(int i = 0; i <= 5; i++)cout << p[i] << endl;*/
    char *p = new char[20];
    p = "Hello world!";
    //for(int i = 0; i <= 5; i++)
      cout << &p << endl;
    delete []p;
    return 0;
}
