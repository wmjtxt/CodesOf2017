#include <iostream>

using namespace std;

int main()
{
    int s, ss, m, i, cnt, flag;
    /*cin >> s;
    for(i = 0; i < 1000; i++){
        if((s-1)%5 == 0){
            m = (s-1)/5;
            cnt++;
            if(cnt == 5) break;
        }
        else{
            cnt = 0;
            s += s;
            continue;
        }
        s = 4 * m;
    }*/
    //cin >> m;
    for(m = 4; m < 10000; m+=4){
        cnt = 0;
        flag = 0;
        s = m;
        while(m%4 == 0){
            m = m/4*5 + 1;
            cnt++;
            if(cnt == 5){
                flag = 1;
                break;
            }
        }
        ss = m;
        m = s;
        //cout << flag << endl;
        if(flag == 1){
            cout << ss << endl;
            break;
        }
    }
    //cout << m << endl;
    return 0;
}
