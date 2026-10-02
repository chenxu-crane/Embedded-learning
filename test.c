#include <stdio.h>
#include <limits.h>
int main(){
    // signed int a = 5;
    // unsigned short b = 10;
    // int c = UCHAR_MAX;
    // printf("%d", sizeof(a));
    // printf("%d", sizeof(b=a+1));//2
    // printf("%d\n", a);//5
    // printf("%d", c);//2147483647

    // int a=3.14;
    // float b=3.14;
    // printf("%d", a);//3.00
    // printf("%.2f", b);//3.140000
    // double c=a+6+b;
    // printf("%.2f\n", c);
    // printf("%6.2f\n", 3.1415);//8
    // printf("%.8s\n", "3.141592689");//8

    int score=0;
    printf("请输入成绩：");
    scanf("%d", &score);
    printf("成绩为：%d\n", score);

    return 0;
}