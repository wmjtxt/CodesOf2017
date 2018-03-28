#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;
struct E{
  char name[101];
  int age;
  int score;
}buf[1000];

bool cmp(E a,E b){
  if(a.score != b.score) return a.score < b.score;
  int tmp = strcmp(a.name, b.name);
  if(tmp != 0) return tmp < 0;
  else return a.age < b.age;
}

int main()
{
    int n;
    while(cin >> n){
      for(int i = 0; i < n; i++){
        cin >> buf[i].name >> buf[i].age >> buf[i].score;
      }//输入
      sort(buf, buf + n, cmp);
      for(int i = 0; i < n; i++){
        cout << buf[i].name << " " << buf[i].age << " " << buf[i].score <<endl;
      }//输出排序结果
    }
    return 0;
}
