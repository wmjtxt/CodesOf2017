#include <iostream>
#include <string>

using namespace std;

struct node{
    string ad;
    int data;
    string next;
}buf1[100000],buf2[100000],buf3[100000];

int main()
{
    int n, k1;
    string firstad;
    while(cin >> firstad >> n >> k1){
    int i, j, k2 = 0, k3 = 0;
    int first = 0;
    for(i = 0; i < n; i++)
      cin >> buf1[i].ad >> buf1[i].data >> buf1[i].next;
    //for(i = 0; i < n; i++) cout << buf1[i].ad << " " << buf1[i].data << " " << buf1[i].next << endl;
    for(i = 0; i < n; i++){
        if(buf1[i].ad == firstad) {
            first = i;
            break;
        }
    }
    buf2[k2] = buf1[first];
    k2++;
    int temp = first;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
          if(buf1[j].ad == buf1[temp].next){
              buf2[k2] = buf1[j];
              k2++;
              break;
          }
        }
        temp = j;
    }
    //cout << "k2=" << k2 << endl;//第6个测试点，去除废点
    j = 0;
    if(firstad == "-1") cout << "-1";
    else if(n < k1 || k1 == 0){
        for(i = 0; i < k2; i++){
            cout << buf2[i].ad << " " << buf2[i].data << " " << buf2[i].next << endl;
        }
    }
    else{
        int n1 = k2;
        while(n1 >= k1){
            for(i = k1+j-1; i >= j; i--){
                buf3[k3] = buf2[i];
                k3++;
            }
            n1 -= k1;
            j += k1;
        }
        //cout << k3 << endl;
        for(i = 0; i < n1; i++){
            buf3[i+k3] = buf2[i+k3];
        }
        for(i = 0; i < k2-1; i++){
            buf3[i].next = buf3[i+1].ad;
        }
        buf3[n-1].next = buf2[n-1].next;
        for(i = 0; i < k2; i++)
            cout << buf3[i].ad << " " << buf3[i].data << " " << buf3[i].next << endl;
    }
    }return 0;
}
