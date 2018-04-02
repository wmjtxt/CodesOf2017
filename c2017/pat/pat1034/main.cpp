/*第一次编译成功
**把所给的两个测试通过了
**提交答案后前两个测试点“答案正确”
**第三个测试点错误,why?
**第四个测试点超时,why?
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
using namespace std;

void simp(int &k, int &a, int &b){//分数化简函数
    if(a >= b){
        k += a/b;
        a %= b;
    }
    for(int i = b; i > 0; i--){
        if(a%i == 0 && b%i == 0){
            a = a/i;
            b = b/i;
        }
    }
    return;
}

void outp(char flag, char sign1, int k1, int a1, int b1, char sign2, int k2, int a2, int b2){//输出式子函数
    if(k1 == 0 && a1 == 0) printf("0");
    else{
        if(sign1 == '-'){
            printf("(-");
        }
        if(k1 != 0) printf("%d",k1);
        if(k1 != 0 && a1 != 0) printf(" ");
        if(a1 != 0) printf("%d/%d",a1,b1);
        if(sign1 == '-'){
            printf(")");
        }
    }
    printf(" %c ",flag);//输出+号
    if(k2 == 0 && a2 == 0) printf("0");
    else{
        if(sign2 == '-'){
            printf("(-");
        }
        if(k2 != 0) printf("%d",k2);
        if(k2 != 0 && a2 != 0) printf(" ");
        if(a2 != 0) printf("%d/%d",a2,b2);
        if(sign2 == '-'){
            printf(")");
        }
    }
    printf(" = ");//输出=号
}

void rplus(char flag, char sign1, int k1, int a1, int b1, char sign2, int k2, int a2, int b2){//加法和减法
    int result_plus_a = 0, result_plus_b = 0, result_plus_int = 0;
    char result_sign = '+';
    if(flag == '-'){
        if(sign2 == '-') sign2 = '+';
        else sign2 = '-';
    }//判断加减
    //计算
    if(sign1 != sign2){
        result_plus_int = k1 - k2;
        result_plus_a = a1*b2 - b1*a2;
        result_plus_b = b1*b2;
        if(result_plus_a == 0 && result_plus_int != 0){    //判断结果符号
            if(result_plus_int > 0) result_sign = sign1;
            else result_sign = sign2;
        }
        else if(result_plus_int == 0 && result_plus_a != 0){
            if(result_plus_a > 0) result_sign = sign1;
            else result_sign = sign2;
        }
        else if(result_plus_int < 0 && result_plus_a > 0){
            result_sign = sign2;
            result_plus_int++;
            result_plus_a = result_plus_b - result_plus_a;
        }
        else if(result_plus_int > 0 && result_plus_a < 0){
            result_sign = sign1;
            result_plus_int--;
            result_plus_a = result_plus_b + result_plus_a;
        }
        else if(result_plus_int < 0 && result_plus_a < 0){
            result_sign = '-';
        }
    }
    else{
        result_plus_int = k1 + k2;
        result_plus_a = a1*b2 + b1*a2;
        result_plus_b = b1*b2;
        result_sign = sign1;
    }
    if(result_plus_a > result_plus_b){
        result_plus_int += result_plus_a/result_plus_b;
        result_plus_a -= result_plus_b;
    }
    if(result_plus_int < 0){
        result_plus_int = -result_plus_int;
    }//整数部分
    if(result_plus_a < 0){
        result_plus_a = -result_plus_a;
    }//小数部分
    //
    simp(result_plus_int,result_plus_a,result_plus_b);//把结果化简
    //输出结果
    if(result_plus_int == 0 && result_plus_a == 0) printf("0");
    else{
            if(result_sign == '-'){
            printf("(-");
        }
        if(result_plus_int != 0) printf("%d",result_plus_int);
        if(result_plus_int != 0 && result_plus_a != 0) printf(" ");
        if(result_plus_a != 0) printf("%d/%d",result_plus_a,result_plus_b);
        if(result_sign == '-'){
            printf(")");
        }
    }
    printf("\n");
}

void mult(char flag, char sign1, int k1, int a1, int b1, char sign2, int k2, int a2, int b2){  //乘除
    int result_mult_a = 0, result_mult_b = 0, result_mult_int = 0;
    char result_mult_sign = '+';
    if(flag == '/'){
        if(k2 == 0 && a2 == 0){
            printf("Inf");
            return;
        }
        else{
            int tmp = b2;
            b2 = k2*b2+a2;
            a2 = tmp;
            k2 = 0;
        }
        simp(k2,a2,b2);
    }
    if(sign1 != sign2 ) result_mult_sign = '-';//求结果符号
    result_mult_int = k1*k2;
    result_mult_a = a1*b2*k2+a2*b1*k1+a1*a2;
    result_mult_b = b1*b2;
    simp(result_mult_int,result_mult_a,result_mult_b);
    if(result_mult_int == 0 && result_mult_a == 0) printf("0");
    else{
            if(result_mult_sign == '-'){
            printf("(-");
        }
        if(result_mult_int != 0) printf("%d",result_mult_int);
        if(result_mult_int != 0 && result_mult_a != 0) printf(" ");
        if(result_mult_a != 0) printf("%d/%d",result_mult_a,result_mult_b);
        if(result_mult_sign == '-'){
            printf(")");
        }
    }
    printf("\n");
}

int main()
{
    //有理数四则运算
    int a1 = 0, b1 = 0, a2 = 0, b2 = 0;
    char asign1 = '+', asign2 = '+';
    int k1 = 0, k2 = 0;
    char inp[135];
    gets(inp);
    int len = strlen(inp);
    int i, flag = 1;
    for(i = 0; i < len; i++){
        if(inp[i] == '-'){
            if(flag == 1) asign1 = '-';
            else if(flag == 3) asign2 = '-';
        }
        else if(inp[i] == '/' || inp[i] == ' '){
            flag++;
        }
        else if(flag == 1){
            a1 = 10*a1 + (inp[i]-'0');
        }
        else if(flag == 2){
            b1 = 10*b1 + (inp[i]-'0');
        }
        else if(flag == 3){
            a2 = 10*a2 + (inp[i]-'0');
        }
        else if(flag == 4){
            b2 = 10*b2 + (inp[i]-'0');
        }
    }//提取a1,b1,a2,b2
    simp(k1,a1,b1);//求最简分数
    simp(k2,a2,b2);
    outp('+',asign1,k1,a1,b1,asign2,k2,a2,b2);
    rplus('+',asign1,k1,a1,b1,asign2,k2,a2,b2);//加
    outp('-',asign1,k1,a1,b1,asign2,k2,a2,b2);
    rplus('-',asign1,k1,a1,b1,asign2,k2,a2,b2);//减
    outp('*',asign1,k1,a1,b1,asign2,k2,a2,b2);
    mult('*',asign1,k1,a1,b1,asign2,k2,a2,b2);//乘
    outp('/',asign1,k1,a1,b1,asign2,k2,a2,b2);
    mult('/',asign1,k1,a1,b1,asign2,k2,a2,b2);//除
    return 0;
}
