#include <iostream>

using namespace std;

int main()
{

    long int p;
    double bonus;
    cin >> p;
    if(p <= 10) bonus = p*0.1;
    else if(p <= 20) bonus = 10*0.1 + (p-10)*0.075;
    else if(p <= 40) bonus = 10*0.1 + 20*0.075 + (p-20)*0.05;
    else if(p <= 60) bonus = 10*0.1 + 20*0.075 + 40*0.05 + (p-40)*0.03;
    else if(p <= 100) bonus = 10*0.1 + 20*0.075 + 40*0.05 + 60*0.03 + (p-60)*0.015;
    else bonus = 10*0.1 + 20*0.075 + 40*0.05 + 60*0.03 + 100*0.015 + (p-100)*0.01;
    cout << bonus << endl;
    return 0;
}
