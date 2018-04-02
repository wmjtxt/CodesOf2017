//#include <iostream>
#include <stdio.h>
#include <iomanip>
//#include <algorithm>
//using namespace std;

struct w{
    int school;
    int score;
}buf[100000];


int main()
{
    int n;
    //cin >> n;
    scanf("%d",&n);
    int school[n], score[n], result[n] = {0};
    int i, j, k;
    int max_school, max_result;
    for(i = 0; i < n; i++) scanf("%d%d",&buf[i].school,&buf[i].score);//cin >> school[i] >> score[i];
    k = 0;//How many school?
    for(i = 0; i < n; i++){
        if(buf[i].school > k) k = buf[i].school;
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < k; j++)
            if(buf[i].school == j+1) result[j] += buf[i].score;
    }//timeout!!!!
    max_result = 0;
    max_school = 0;
    for(i = 0; i < n; i++){
        if(result[i] > max_result){
            max_result = result[i];
            max_school = i+1;
        }
    }
    //cout << max_school << " " << max_result << endl;
    printf("%d %d",max_school,max_result);
    return 0;
}
