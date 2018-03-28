#include <iostream>

using namespace std;

int main()
{
    char a, b;
    cout << "请输入第一个字母:" ;
    cin >> a;
    if(a == 'M' || a == 'm') cout << "Monday";
    else if(a == 'T' || a == 't'){
        cout << "请输入第二个字母:" ;
        cin >> b;
        if(b == 'u') cout << "Tuesday";
        else if(b == 'h') cout << "Thursday";
        else cout << "Wrong input!!";
    }
    else if(a == 'W' || a == 'w') cout << "Wednesday";
    else if(a == 'F' || a == 'f') cout << "Friday";
    else if(a == 'S' || a == 's'){
        cout << "请输入第二个字母:" ;
        cin >> b;
        if(b == 'a') cout << "Saturday";
        else if(b == 'u') cout << "Sunday";
        else  cout << "Wrong input!!";
    }
    else cout << "Wrong input!!";
    return 0;
}
