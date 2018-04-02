#include <stdio.h>

int main()
{
    int num;
    int cou;
    while(scanf("%d",&num) != EOF){
       cou = 0;
       while(num != 1){
         if(num%2 == 0){
            num = num / 2;
            cou++;
         }
         else {
            num = (3 * num + 1) / 2;
            cou++;
         }
      }
      printf("%d\n",cou);
    }
    return 0;
}
